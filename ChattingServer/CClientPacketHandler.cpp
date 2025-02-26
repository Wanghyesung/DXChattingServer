#include "pch.h"
#include "CClientPacketHandler.h"
#include "CRoom.h"
#include "CClientSession.h"

PacketHandlerFunc GPacketHandler[UINT16_MAX] = {};

void CClientPacketHandler::HandlePacket(BYTE* _pBuffer, UINT _ID)
{
	//Ŭ�󿡼� �� ��Ŷ ó��
	switch (_ID)
	{
	case S_ENTER:
		
		break;

	case S_CHATTING:

		break;

	case S_EXIT:

		break;
	}
}


bool Handle_C_ENTER(shared_ptr<Session> _pSession, Protocol::C_ENTER& _pkt)
{
	shared_ptr<CClientSession> pSession = static_pointer_cast<CClientSession>(_pSession);
	pSession->SetPersonName(_pkt.name());
	const string& _strPersonName = _pkt.name();

	//�����ߴٸ�
	if (GRoom.Check(_strPersonName) == false)
		return false;

	//�ٸ� Ŭ��鿡�� ����
	Protocol::S_NEW_ENTER other_pkt;
	other_pkt.set_user(_strPersonName);
	shared_ptr<SendBuffer> pSendBuffer = CClientPacketHandler::MakeSendBuffer(other_pkt);
	GRoom.Broadcast(pSendBuffer);


	vector<string> strPersons = GRoom.GetPersons();
	Protocol::S_ENTER pkt;
	pkt.set_success(true);
	for (int i = 0; i < strPersons.size(); ++i)
	{
		pkt.add_users(strPersons[i]);
	}
	pSendBuffer = CClientPacketHandler::MakeSendBuffer(pkt);
	_pSession->Send(pSendBuffer);

	GRoom.Enter(_strPersonName, _pSession);
	return true;
}

bool Handle_C_CHATTING(shared_ptr<Session> _pSession, Protocol::C_CHATTING& _pkt)
{
	
	//���� ������ �ٸ� Ŭ��鿡�� ����
	Protocol::S_NEW_CHATTING other_pkt;
	other_pkt.set_name(_pkt.name());
	other_pkt.set_text(_pkt.text());
	shared_ptr<SendBuffer> pSendBuffer = CClientPacketHandler::MakeSendBuffer(other_pkt);
	GRoom.BroadcastExcept(pSendBuffer, _pSession);

	//���� ��Ŷ ����
	Protocol::S_CHATTING pkt;
	pkt.set_success(true);
	pSendBuffer = CClientPacketHandler::MakeSendBuffer(pkt);
	_pSession->Send(pSendBuffer);

	return true;
}

bool Handle_C_EXIT(shared_ptr<Session> _pSession, Protocol::C_EXIT& _pkt)
{
	shared_ptr<CClientSession> pSession = static_pointer_cast<CClientSession>(_pSession);
	GRoom.Exit(pSession->GetPersonName());

	Protocol::S_NEW_EXIT other_pkt;
	other_pkt.set_name(pSession->GetPersonName());
	shared_ptr<SendBuffer> pSendBuffer = CClientPacketHandler::MakeSendBuffer(other_pkt);
	GRoom.BroadcastExcept(pSendBuffer, _pSession);

	//���� ��Ŷ ���� (���ʿ� (������ Ŭ�� �����))
	//Protocol::S_EXIT pkt;
	//pkt.set_success(true);
	//_pSession->Send(pSendBuffer);
	return true;
}

string WstringToString(const wstring& _str)
{
	int iSize = WideCharToMultiByte(CP_UTF8, 0, _str.c_str(), -1, NULL, 0, NULL, NULL);
	string str(iSize, 0);
	WideCharToMultiByte(CP_UTF8, 0, _str.c_str(), -1, &str[0], iSize, NULL, NULL);
	return str;
}

