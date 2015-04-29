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

interface iface{
};

struct myClass{
	int len;
	char s[0];
	//char xxx[4];
};

struct myClass2{
	int len;
	char* s;
};

int _tmain(int argc, _TCHAR* argv[])
{
	myClass a;
	myClass * p = 0;
	myClass2 * p2 = 0;
	printf("sizeof: %d\n", sizeof(iface));
	printf("sizeof: %d\n", sizeof(myClass));
	if (p->s)
	{
		if (&(p2->s))
		{
			int xx = 2;
		}
		printf(p->s);
	}
	return 0;
}
