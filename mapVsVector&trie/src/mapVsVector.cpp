// mapVsVector.cpp : Defines the entry point for the console application.
//

#include "testObj.h"
#include <windows.h>


#ifdef _DEBUG
   #ifndef DBG_NEW
      #define DBG_NEW new( _NORMAL_BLOCK , __FILE__ , __LINE__ )
      #define new DBG_NEW
   #endif
#endif

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

int _tmain(int argc, _TCHAR* argv[])
{
	testObj obj;
	{
		CallTimeRecorder t("constructTrie");
		obj.initData(10 * 10000);
	}

	{
		CallTimeRecorder t("constructVector");
		obj.constructVector();
	}


	{
		CallTimeRecorder t("constructMap");
		obj.constructMap();
	}

	{
		CallTimeRecorder t("constructTrie");
		obj.constructTrie();
	}

	{
		CallTimeRecorder t("findVector");
		obj.findVector();
	}

	{
		CallTimeRecorder t("findMap");
		obj.findMap();
	}

	{
		CallTimeRecorder t("findTrie");
		obj.findTrie();
	}

	char * p = new char[50];
	//_CrtDumpMemoryLeaks();
	return 0;
}

