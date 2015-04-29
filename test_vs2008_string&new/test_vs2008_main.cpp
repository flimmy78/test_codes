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


void test_lock(int doTimes);
void test_no_lock(int doTimes);

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
		printf("%s\n", m_buff);
	}

	char* m_name;
	LARGE_INTEGER m_start;
	static char* m_buff;
};
char* CallTimeRecorder::m_buff = 0;

void test_new_delete(int doTimes);

int _tmain(int argc, _TCHAR* argv[])
{
	int doTimes = 1000 * 10000;
	printf ("do times:%d\n", doTimes);

	{
		CallTimeRecorder r("test_no_lock");
		int b = GetTickCount();
		test_no_lock(doTimes);
		int e = GetTickCount();
		printf("%d\n", e - b);
	}

	{
		CallTimeRecorder r("test_lock");
		int b = GetTickCount();
		test_lock(doTimes);
		int e = GetTickCount();
		printf("%d\n", e - b);
	}

	{
		CallTimeRecorder r("test_new_delete");
		int b = GetTickCount();
		test_new_delete(doTimes);
		int e = GetTickCount();
		printf("%d\n", e - b);
	}

	CallTimeRecorder::printBuff();
	return 0;
}

void do_something()
{
	
	std::string var = "abcd";
	std::string t = var;
}

void do_something2()
{
	char* t = new char[500];
	delete t;
}

void test_lock(int doTimes)
{

	CRITICAL_SECTION CriticalSection; 
	if (!InitializeCriticalSectionAndSpinCount(&CriticalSection, 0x00004000) ) 
        return;

	int i = 0;
	while (i < doTimes)
	{
		EnterCriticalSection(&CriticalSection);
		++i;
		do_something();
		LeaveCriticalSection(&CriticalSection);
	}

	DeleteCriticalSection(&CriticalSection);
}

void test_no_lock(int doTimes)
{
	int i = 0;
	while (i < doTimes)
	{
		++i;
		do_something();
	}
}

void test_new_delete(int doTimes)
{
	int i = 0;
	while (i < doTimes)
	{
		++i;
		do_something2();
	}
}
