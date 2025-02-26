#include "pch.h"
#include "CClientSession.h"
#include "CClientPacketHandler.h"
#include "CRoom.h"
CClientSession::CClientSession():
	m_strPersonName{}
{

}

CClientSession::~CClientSession()
{

}

int CClientSession::OnRecvPacket(BYTE* _buffer, int _iLen)
{
	//PacketHeader* pHeader = reinterpret_cast<PacketHeader*>(_buffer);

	shared_ptr<PacketSession> pSession = GetPacketSessionRef();
	CClientPacketHandler::HandlePacket(pSession, _buffer, _iLen);

	return _iLen;
}

void CClientSession::OnConnected()
{
	
}

void CClientSession::OnSend(int len)
{

}

void CClientSession::OnDisConnected()
{
	//여기서 GROOM의 해제된 세션 확인
	GRoom.Exit(m_strPersonName);


	Protocol::S_NEW_EXIT other_pkt;
	other_pkt.set_name(m_strPersonName);
	shared_ptr<SendBuffer> pSendBuffer = CClientPacketHandler::MakeSendBuffer(other_pkt);
	GRoom.Broadcast(pSendBuffer);
}
