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

#include "snmp_pp/notifyqueue.h"
#include "snmp_pp/snmp_pp.h"
//#include "cots/libsmi/libsmi-0.4.3/lib/smi.h"


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

void ttt()
{
	 //Snmp* p = new Snmp();
}

int main_r_trap_jun(int argc, char **argv);

int _tmain(int argc, _TCHAR* argv[])
{
	char **argv2 = (char **) argv;
	cout << argv[1] << endl;
	cout << argv2[1] << endl;
	

	main_r_trap_jun(argc, argv2);


	return 0;
}
