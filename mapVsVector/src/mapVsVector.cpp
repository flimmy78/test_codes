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

int _tmain(int argc, _TCHAR* argv[])
{
	int t1 = GetTickCount();
	testObj obj;
	int t2 = GetTickCount();
	printf("init %dms\n", t2 - t1);

	obj.constructVector();

	int t3 = GetTickCount();
	printf("con vet %dms\n", t3 - t2);

	obj.constructMap();

	int t4 = GetTickCount();
	printf("con Map %dms\n", t4 - t3);

	obj.constructTrie();

	int t4a = GetTickCount();
	printf("con Trie %dms\n", t4a - t4);

	obj.findVector();

	int t5 = GetTickCount();
	printf("find vet %dms\n", t5 - t4a);

	obj.findMap();

	int t6 = GetTickCount();
	printf("find map %dms\n", t6 - t5);

	obj.findTrie();

	int t7 = GetTickCount();
	printf("find trie %dms\n", t7 - t6);

	char * p = new char[50];
	_CrtDumpMemoryLeaks();
	return 0;
}

