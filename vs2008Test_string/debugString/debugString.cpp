// debugString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <vector>
#include <windows.h>

struct CorbaNameEx
{
public:
	CorbaNameEx( unsigned long entityKey, unsigned long agentKey, unsigned long locationKey, const std::string& objectName) :
		m_entityKey(entityKey),
		m_agentKey(agentKey), 
		m_locationKey(locationKey),
		m_objectName(objectName)
	{}

	unsigned long getEntityKey() const
	{
		return m_entityKey;
	}

	unsigned long getAgentKey() const
	{
		return m_agentKey;
	}

	std::string getObjectName() const
	{
		return m_objectName;
	}

	unsigned long getLocationKey() const
	{
		return m_locationKey;
	}

private:
	/**
	 * CorbaName
	 *
	 * Hide the default constructor
	 */
	CorbaNameEx();

	unsigned long	m_entityKey;
	unsigned long	m_agentKey;
	unsigned long	m_locationKey;
	std::string		m_objectName;
};

typedef std::vector<CorbaNameEx> CorbaNameExList;

CorbaNameExList getIt()
{
	CorbaNameExList t;
	int i = 0;
	while (i < 2000000)
	{
		CorbaNameEx cn(i, 2, 3, "namexxxxx");
		t.push_back(cn);
		i = i + 1;
	}

	return t;
};

class CallTimeRecorder
{
public:
	CallTimeRecorder (char* name)
	{
		m_name = name;
		QueryPerformanceCounter(&m_start);
	}

	~CallTimeRecorder ()
	{
		LARGE_INTEGER end;
		QueryPerformanceCounter(&end);


		static LARGE_INTEGER proc_freq;
		static BOOL b = QueryPerformanceFrequency(&proc_freq);

		LONGLONG diff = end.QuadPart - m_start.QuadPart;
		double freq = proc_freq.QuadPart;
		printf("name=%s, freq=%lld, start=%lld, diff=%lld, seconds=%f\n", m_name, proc_freq, m_start.QuadPart, diff, diff / freq);
	};

	char* m_name;
	LARGE_INTEGER m_start;
};

class ttt
{
public:
	ttt()
	{
		a = 2;
	};

	ttt(const ttt& r)
	{
		a = r.a;
	}
	int a;
};

int _tmain(int argc, _TCHAR* argv[])
{
	std::string s;
	s = "22";
	printf("%s\n", s.c_str());

	ttt t;
	std::vector<ttt> v;
	v.push_back(t);
	std::vector<ttt> v2 = v;
	ttt t2;
	{
		CallTimeRecorder t("new 2000000");
		CorbaNameExList lst = getIt();
	}
	return 0;
}

