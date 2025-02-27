#pragma once
class CPerson;
class Session;

class CRoom
{
public:
	CRoom();
	~CRoom();

public:
	bool Check(const string& _strName);
	bool Enter(const string& _strName, shared_ptr<Session> _pSession);
	void Exit(const string& _strName);
	void Broadcast(shared_ptr<SendBuffer> _pBuffer);
	void BroadcastExcept(shared_ptr<SendBuffer> _pBuffer, shared_ptr<Session> _pExceptSession);

	vector<string> GetPersons();
private:
	RWLock m_lock;

	map<string, shared_ptr<Session>> m_mapPerson;

	atomic<INT> m_iMaxCount;
	atomic<INT> m_iCurCount;
};


extern CRoom GRoom;