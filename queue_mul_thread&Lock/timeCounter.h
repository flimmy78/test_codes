
#ifndef MY_TIME_COUNTER_H
#define MY_TIME_COUNTER_H

#include <windows.h>

class timeCounter
{
public:
	timeCounter(char* name)
	{
		m_name = name;
		QueryPerformanceCounter(&m_start);
	}

	~timeCounter()
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
#endif
