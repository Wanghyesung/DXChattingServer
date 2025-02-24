#pragma once
#include "PacketSession.h"

//Ŭ�󿡼� �� ��Ŷ
class CClientSession : public PacketSession
{

public:
    CClientSession();
    virtual ~CClientSession();

public:
	virtual int OnRecvPacket(BYTE* _buffer, int _iLen) override;

    virtual void OnConnected()override;
    virtual void OnSend(int len)override;
    virtual void OnDisConnected()override;

public:
    const string& GetPersonName() { return m_strPersonName; }
    void SetPersonName(const string& _strName) { m_strPersonName = _strName; }
private:
    string m_strPersonName;
};

