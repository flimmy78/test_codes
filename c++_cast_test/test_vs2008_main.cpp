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
		printf("name=%s, freq=%lld, start=%lld, end=%lld, diff=%lld, seconds=%f\n", m_name, proc_freq, m_start.QuadPart, end.QuadPart, diff, diff / freq);
	};

	char* m_name;
	LARGE_INTEGER m_start;
};

class Base
{
public:
	virtual ~Base(){};
};

class Derived : public Base
{
};

class Derived2 : public Base
{
};

int _tmain(int argc, _TCHAR* argv[])
{
	Base* pBase = new Base();
	Base* pDr = new Derived();
	Base* pDr2 = new Derived2();

	Derived* px = 0;

	int times = 10000 * 1000;
	int i = 0;

	{
		CallTimeRecorder a("dynamic_cast");
		i = 0;
		while (i < times)
		{
			px = dynamic_cast<Derived*>(pDr);
			if (px)
			{
				//printf("dynamic_cast<Derived*>(pDr) ok\n");
			}
			else
			{
				//printf("dynamic_cast<Derived*>(pDr) fail\n");
			}

			px = dynamic_cast<Derived*>(pDr2);
			if (px)
			{
				//printf("dynamic_cast<Derived*>(pDr2) ok\n");
			}
			else
			{
				//printf("dynamic_cast<Derived*>(pDr2) fail\n");
			}
			++i;
		}
	}

	{
		CallTimeRecorder a("static_cast");
		i = 0;
		while (i < times)
		{
			px = static_cast<Derived*>(pDr);
			if (px)
			{
				//printf("static_cast<Derived*>(pDr) ok\n");
			}
			else
			{
				//printf("static_cast<Derived*>(pDr) fail\n");
			}

			px = static_cast<Derived*>(pDr2);
			if (px)
			{
				//printf("static_cast<Derived*>(pDr2) ok\n");
			}
			else
			{
				//printf("static_cast<Derived*>(pDr2) fail\n");
			}
			++i;
		}
	}

	{
		CallTimeRecorder a("string-short");
		i = 0;
		while (i < times)
		{
			std::string s = "string";
			//s.append("b");
			++i;
		}
	}

	{
		CallTimeRecorder a("new int");
		i = 0;
		while (i < times)
		{
			int* p = new int;
			delete p;
			++i;
		}
	}

	{
		CallTimeRecorder a("string-long");
		i = 0;
		while (i < times)
		{
			std::string s = "string1234567890";
			//s.append("b");
			++i;
		}
	}

	{
		times = 1;
		CallTimeRecorder a("dynamic_cast");
		i = 0;
		while (i < times)
		{
			px = dynamic_cast<Derived*>(pDr);
			if (px)
			{
				printf("dynamic_cast<Derived*>(pDr) ok\n");
			}
			else
			{
				printf("dynamic_cast<Derived*>(pDr) fail\n");
			}

			px = dynamic_cast<Derived*>(pDr2);
			if (px)
			{
				printf("dynamic_cast<Derived*>(pDr2) ok\n");
			}
			else
			{
				printf("dynamic_cast<Derived*>(pDr2) fail\n");
			}
			++i;
		}
	}

	{
		CallTimeRecorder a("static_cast");
		i = 0;
		while (i < times)
		{
			px = static_cast<Derived*>(pDr);
			if (px)
			{
				printf("static_cast<Derived*>(pDr) ok\n");
			}
			else
			{
				printf("static_cast<Derived*>(pDr) fail\n");
			}

			px = static_cast<Derived*>(pDr2);
			if (px)
			{
				printf("static_cast<Derived*>(pDr2) ok\n");
			}
			else
			{
				printf("static_cast<Derived*>(pDr2) fail\n");
			}
			++i;
		}
	}
	
	return 0;
}
