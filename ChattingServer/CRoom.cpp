#include "pch.h"
#include "CRoom.h"
#include "RWLock.h"
#include "PacketSession.h"

CRoom GRoom;

CRoom::CRoom():
	m_iMaxCount(5)
{
}

CRoom::~CRoom()
{
}

bool CRoom::Check(const string& _strName)
{
	//읽기 전용
	RLock ReadLock(m_lock);

	if (m_mapPerson.find(_strName) != m_mapPerson.end())
		return false;

	if (m_mapPerson.size() > m_iMaxCount)
		return false;

	return true;
}

bool CRoom::Enter(const string& _strName, shared_ptr<Session> _pSession)
{
	WLock WriteLock(m_lock);

	m_mapPerson.insert(make_pair(_strName, _pSession));
	
	m_iCurCount.fetch_add(1);
	return true;
}

void CRoom::Exit(const string& _strName)
{
	WLock lock(m_lock);

	if (m_mapPerson.find(_strName) == m_mapPerson.end())
		return;

	m_mapPerson.erase(_strName);

	m_iCurCount.fetch_sub(1);
}

void CRoom::Broadcast(shared_ptr<SendBuffer> _pBuffer)
{
	WLock lock(m_lock);
	for (auto& iter : m_mapPerson)
	{
		iter.second->Send(_pBuffer);
	}
}

void CRoom::BroadcastExcept(shared_ptr<SendBuffer> _pBuffer, shared_ptr<Session> _pExceptSession)
{
	WLock lock(m_lock);
	for (auto& iter : m_mapPerson)
	{
		if (iter.second == _pExceptSession)
			continue;

		iter.second->Send(_pBuffer);
	}
}

vector<string> CRoom::GetPersons()
{
	RLock ReadLock(m_lock);
	
	vector<string> strName = {};
	for (auto iter : m_mapPerson)
	{
		 strName.push_back(iter.first);
	}

	return strName;
}
