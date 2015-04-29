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
#include <math.h>

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

// find 50847534 numbers in size: 1000000000, this a right answer.

const int g_primeNumSize = 10000000;// * 10000 * 10000;
const int g_primes[25] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97}; // 25, less then 100.
const int g_primeCountLessThen100 = 25;

bool* g_tempArr;

void setTempArr()
{
	int i = 0;
	for (i = 0; i < g_primeNumSize; ++i)
	{
		g_tempArr[i] = true;
	}
	g_tempArr[0] = false;
	g_tempArr[1] = false;
}

void fun1()
{
	int i, j;
	double sz = g_primeNumSize;
	double maxTo = sqrt(sz);
	int sq = int(maxTo) + 1;
	printf("double is:%f, int+1 is :%d\n", maxTo, sq);
	for (i = 2; i < sq; ++i)
	{
		if (g_tempArr[i])
		{
			j = i * i;
			while (j < g_primeNumSize)
			{
				g_tempArr[j] = false;
				j = j + i;
			}
		}
	}
}

void countNums()
{
	int i = 0, nums = 0;
	while (i < g_primeNumSize)
	{
		if (g_tempArr[i])
		{
			//printf("%d,", i);
			++nums;
		}
		++i;
	}
	printf("find %d numbers in size: %d\n", nums, g_primeNumSize);
}

struct Node
{
	int index;
	Node* last;
	Node* next;
};


int feiMa(int a, int x, int p)
{
	long long tmp = 1;
	if (x & 1)
	{
		tmp = (tmp * a ) % p;
	}
	if (0 == tmp) return 0;
	if (x >> 1)
	{
		long long t = feiMa(a, x >> 1, p);
		t = (t * t) % p;
		tmp = (tmp * t) % p;
	}
	return (int)tmp;
}

void feiMaFun()
{
	int i, j;
	int nums = 0;
	for (i = 2; i < g_primeNumSize; ++i)
	{
		for (j = 0; j < g_primeCountLessThen100; ++j)
		{
			if (i == g_primes[j])
				continue;
			if (1 != feiMa(g_primes[j], i - 1, i))
			{
				break;
			}
		}
		if (j >= g_primeCountLessThen100)
		{
			//printf("%d,", i);
			++nums;
			if (!g_tempArr[i])
				printf("not prime: %d\n", i);
		}
		else if(g_tempArr[i])
			printf("xxx: %d\n", i);
	}
	printf("feima, find %d numbers in size: %d\n", nums, g_primeNumSize);
}

int _tmain(int argc, _TCHAR* argv[])
{
	printf("size is: %d\n", g_primeNumSize);
	{
		CallTimeRecorder t("new array");
		g_tempArr = new bool[g_primeNumSize];
	}

	{
		CallTimeRecorder t("init array.");
		setTempArr();
	}

	{
		CallTimeRecorder t("fun1");
		fun1();
	}

	{
		CallTimeRecorder t("countNums");
		countNums();
	}

	{
		CallTimeRecorder t("feiMaFun");
		feiMaFun();
	}

	return 0;
}
