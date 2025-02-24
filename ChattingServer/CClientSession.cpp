#include "pch.h"
#include "CClientSession.h"
#include "CClientPacketHandler.h"

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

}
