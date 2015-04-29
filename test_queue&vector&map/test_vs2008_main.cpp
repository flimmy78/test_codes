// test_vs2008_string.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <time.h>
#include <string>
#include <queue>
#include <map>
#include <vector>
#include <iostream>
using namespace std;

#include <tlhelp32.h>
#include <stdio.h>
#include <Winbase.h>


void test_pri_queue(int doTimes);
void test_queue(int doTimes);
void test_map(int doTimes);
void test_vector(int doTimes);

class CallTimeRecorder
{
public:
	CallTimeRecorder (char* name)
	{
		m_name = name;
		QueryPerformanceCounter(&m_start);
	}

	void xCallTimeRecorder ()
	{
		LARGE_INTEGER end;
		QueryPerformanceCounter(&end);


		static LARGE_INTEGER proc_freq;
		static BOOL b = QueryPerformanceFrequency(&proc_freq);

		static char* buff = new char[10000];
		static int lenght = 0;
		m_buff = buff;

		LONGLONG diff = end.QuadPart - m_start.QuadPart;
		double freq = proc_freq.QuadPart;
		int lent = sprintf(buff + lenght, "name=%s, freq=%lld, start=%lld, diff=%lld, seconds=%f\n", m_name, proc_freq, m_start.QuadPart, diff, diff / freq);
		lenght = lenght + lent;
	};

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

	static void printBuff()
	{
		printf("%s", m_buff);
	}

	char* m_name;
	LARGE_INTEGER m_start;
	static char* m_buff;
};
char* CallTimeRecorder::m_buff = 0;

int _tmain(int argc, _TCHAR* argv[])
{
	int doTimes = 100 * 10000;
	printf("test times:%d\n", doTimes);
	
	{
		CallTimeRecorder r("test_queue");
		int b = GetTickCount();
		test_queue(doTimes);
		int e = GetTickCount();
		printf("%d\n", e - b);
	}

	{
		CallTimeRecorder r("test_vector");
		int b = GetTickCount();
		test_vector(doTimes);
		int e = GetTickCount();
		printf("%d\n", e - b);
	}

	{
		CallTimeRecorder r("test_map");
		int b = GetTickCount();
		test_map(doTimes);
		int e = GetTickCount();
		printf("%d\n", e - b);
	}

	{
		CallTimeRecorder r("test_pri_queue");
		int b = GetTickCount();
		test_pri_queue(doTimes);
		int e = GetTickCount();
		printf("%d\n", e - b);
	}

	CallTimeRecorder::printBuff();

	return 0;
}

class AbstractCommand
{
public:
	AbstractCommand(int id, int scheduledTime) {m_id = id; m_scheduledTime = scheduledTime;};

	bool operator<( const AbstractCommand* rhs ) {return ( m_scheduledTime < rhs->m_scheduledTime )!=0;}
	bool operator>( const AbstractCommand* rhs ) {return ( m_scheduledTime > rhs->m_scheduledTime )!=0;}
	
	
	int m_id;
	int m_scheduledTime;
};

void test_pri_queue(int doTimes)
{
	std::priority_queue<AbstractCommand*> tq;
	int i = 0;
	while (i < doTimes)
	{
		++i;
		tq.push(new AbstractCommand(i, GetTickCount()));
	}
	AbstractCommand* x = tq.top();
	return ;

	while (!tq.empty())
	{
		x = tq.top();
		delete x;

		tq.pop();
	}
}

void test_queue(int doTimes)
{
	std::queue<AbstractCommand*> tq;
	int i = 0;
	while (i < doTimes)
	{
		++i;
		tq.push(new AbstractCommand(i, GetTickCount()));
	}
	
	//std::sort(tq.front(), tq.back());

	AbstractCommand* x = 0;
	return ;

	while (!tq.empty())
	{
		x = tq.front();
		delete x;
		tq.pop();
	}
}

void test_map(int doTimes)
{
	std::map<int, AbstractCommand*> tq;
	int i = 0;
	while (i < doTimes)
	{
		++i;
		tq[i] = new AbstractCommand(i, GetTickCount());
	}
	AbstractCommand* x = 0;
	return ;
	while (!tq.empty())
	{
		x = tq.begin()->second;
		delete x;
		tq.erase(tq.begin());
	}
}

void test_vector(int doTimes)
{
	std::vector<AbstractCommand*> tq;
	int i = 0;
	while (i < doTimes)
	{
		++i;
		tq.push_back(new AbstractCommand(i, GetTickCount()));
	}

	//std::sort(tq.begin(), tq.end());

	AbstractCommand* x = 0;
	return ;
	while (!tq.empty())
	{
		x = tq[0];
		delete x;
		tq.erase(tq.begin());
	}
}

