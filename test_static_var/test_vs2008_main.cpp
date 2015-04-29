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

class cX{
	int x;
	static int gg;
public:
	cX(int v = 11)
	{
		x = v;
		static int b = 0;
		int xx = b;
	};
	void fun()
	{
		static int b;
		int xx = b;
		int a = (int)(&b);
		b = 16;
	}
};

class subZ : public cX{
public:
	subZ(){};
	void fun(){};
};

class cY{
	int y;
	static cX x;
public:
	cY(){};
	void fun()
	{
		static cX t;
		x.fun();
	}
	bool bbb(){return true;};
	cY( cY* v)
	{
		y = v->y;
	}
	cY& operator = (const cY & v)
	{
		y = v.y;
		return *this;
	}
	class Inner{
	};
};

int cX::gg = -1;
cX cY::x(99);

int _tmain(int argc, _TCHAR* argv[])
{
	cY::Inner* in = new cY::Inner();

	cY y;
	y.fun();
	cY y2 = &y;
	y2 = y;
	cY y3(y);
	if ((y2 = y).bbb());
	cX* p = new cX[20];
	return 0;
}
