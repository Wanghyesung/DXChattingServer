#pragma once
#include "Enter.pb.h"
#include "Exit.pb.h"
#include "Chatting.pb.h"
#include "PacketSession.h"

enum PACKET_TYPE
{
	S_ENTER = 1000,
	C_ENTER = 1001,
	S_NEW_ENTER = 1002,

	S_CHATTING = 1003,
	C_CHATTING = 1004,
	S_NEW_CHATTING = 1005,

	S_EXIT = 1006,
	C_EXIT = 1007,
	S_NEW_EXIT = 1008,
};

using PacketHandlerFunc = std::function<bool (shared_ptr<PacketSession>&, BYTE*, INT)>;
extern PacketHandlerFunc GPacketHandler[UINT16_MAX];


template <typename T>
shared_ptr<SendBuffer> _MakeSendBuffer(T& _pkt, UINT _ID);

bool Handle_C_ENTER(shared_ptr<Session> _pSession, Protocol::C_ENTER& _pkt);
bool Handle_C_CHATTING(shared_ptr<Session> _pSession, Protocol::C_CHATTING& _pkt);
bool Handle_C_EXIT(shared_ptr<Session> _pSession, Protocol::C_EXIT& _pkt);

string WstringToString(const wstring& _str);

class CClientPacketHandler
{
public:
	static void HandlePacket(BYTE* _pBuffer, UINT _ID);
	static bool HandlePacket(shared_ptr<PacketSession>& _pSession, BYTE* _pBuffer, INT _iLen)
	{
		PacketHeader* pHeader = reinterpret_cast<PacketHeader*>(_pBuffer);
		return GPacketHandler[pHeader->id](_pSession,_pBuffer, _iLen);
	}
	static void Init()
	{
		for (int i = 0; i < UINT16_MAX; i++)
			GPacketHandler[i] = nullptr;

		GPacketHandler[C_ENTER] = [](shared_ptr<PacketSession>& _pSession, BYTE* _pBuffer, INT _iLen)
			{ return HandlePacket<Protocol::C_ENTER>(Handle_C_ENTER, _pSession, _pBuffer, _iLen); };
		GPacketHandler[C_CHATTING] = [](shared_ptr<PacketSession>& _pSession, BYTE* _pBuffer, INT _iLen)
			{ return HandlePacket<Protocol::C_CHATTING>(Handle_C_CHATTING, _pSession, _pBuffer, _iLen); };
		GPacketHandler[C_EXIT] = [](shared_ptr<PacketSession>& _pSession, BYTE* _pBuffer, INT _iLen)
			{ return HandlePacket<Protocol::C_EXIT>(Handle_C_EXIT, _pSession, _pBuffer, _iLen); };

	}

	template <typename T, typename Func>
	static bool HandlePacket(Func _pFunc, shared_ptr<PacketSession>& _pSession ,BYTE* _pBuffer, INT _iLen)
	{
		T pkt;
		if (pkt.ParseFromArray(_pBuffer + sizeof(PacketHeader), _iLen - sizeof(PacketHeader)) == false)
			return false;
		
		return _pFunc(_pSession, pkt);
	}
	
	//서버에서 클라로 던지는 패킷
	static shared_ptr<SendBuffer> MakeSendBuffer(Protocol::S_ENTER _pkt) { return _MakeSendBuffer(_pkt, S_ENTER); }
	static shared_ptr<SendBuffer> MakeSendBuffer(Protocol::S_NEW_ENTER _pkt) { return _MakeSendBuffer(_pkt, S_NEW_ENTER); }
	static shared_ptr<SendBuffer> MakeSendBuffer(Protocol::S_CHATTING _pkt) { return _MakeSendBuffer(_pkt, S_CHATTING); }
	static shared_ptr<SendBuffer> MakeSendBuffer(Protocol::S_NEW_CHATTING _pkt) {return _MakeSendBuffer(_pkt, S_NEW_CHATTING); }
	static shared_ptr<SendBuffer> MakeSendBuffer(Protocol::S_NEW_EXIT _pkt) {return _MakeSendBuffer(_pkt, S_NEW_EXIT); }
};

template<typename T>
inline shared_ptr<SendBuffer> _MakeSendBuffer(T& _pkt, UINT _ID)
{
	const UINT16 iDataSize = static_cast<UINT16>(_pkt.ByteSizeLong()); //해당 패킷의 사이즈
	const UINT16 iPacketSize = sizeof(PacketHeader) + iDataSize; //헤더를 붙인 패킷의 사이즈

	shared_ptr<SendBuffer> pSendBuffer = SendBufferMgr->Open(iPacketSize);

	PacketHeader* pHeader = reinterpret_cast<PacketHeader*>(pSendBuffer->GetData());
	pHeader->id = _ID;
	pHeader->size = iPacketSize;

	_pkt.SerializeToArray(&pHeader[1], iDataSize); //데이터 크기만큼 pkt에 직렬화
	pSendBuffer->Close(iPacketSize);

	return pSendBuffer;
}
