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

#define toStringAndFromString \
	virtual void toString()\
	{\
		CCC c;\
		c.call_in(*this);\
	}\
	virtual void FromString()\
	{\
		CCC c;\
		c.call_out(*this);\
	}\

class CCC
{
	int ab;
public:
	virtual void vFun()
	{
		printf("CCC vFun: %d\n", this);
	}
	template<typename T>
	void call_in(T& o)
	{
		o.Ser(1);
	}
	template<typename T>
	void call_out(T& o)
	{
		o.Ser(2);
	}
};

interface iface{
public:
	void ShowThis();
	virtual void vFun() = 0;
	virtual void toString() = 0;
	virtual void FromString() = 0;
};

class baseClass : public iface
{
	int len;
	char s[1];
public:
	void ShowThis()
	{
		printf("baseClass: %d\n", this);
		vFun();
	}
	virtual void vFun()
	{
		printf("baseClass vFun: %d\n", this);
	}
	toStringAndFromString;
	template<typename T>
	void Ser(T x)
	{
		printf("baseClass2 sss %d\n", x);
	};
};

class baseClass2 : public iface
{
	int len;
	char s[1];
public:
	void ShowThis()
	{
		printf("baseClass2: %d\n", this);
		vFun();
	}
	virtual void vFun()
	{
		printf("baseClass2 vFun: %d\n", this);
	}

};

class AClass :public baseClass
{
	int len;
	char* s;

public:
	void ShowThis()
	{
		baseClass::ShowThis();
		//baseClass2::ShowThis();
		printf("AClass: %d\n", this);
		vFun();
	}
	template<typename T>
	T& getType(){ return *this};
	virtual void vFun()
	{
		printf("AClass vFun: %d\n", this);
	}

	toStringAndFromString;

	template<typename T>
	void Ser(T x)
	{
		printf("AClass sss %d\n", x);
	};
	bool operator == (const AClass* b)
	{
		int x = 2;
		return false;
	}
};
bool operator == (const AClass* a, const AClass b)
{
	int x = 2;
	return false;
}

int _tmain(int argc, _TCHAR* argv[])
{
	AClass* p = new AClass();
	AClass&a = *p;
	a.toString();
	a.FromString();

	baseClass* bb = p;
	bb->toString();
	bb->FromString();
	if (p == *p)
	{
	}
	if (*p == p)
	{
	}

//	printf("sizeof: %d\n", sizeof(iface));
	printf("sizeof: %d\n", sizeof(AClass));
	
	return 0;
}
