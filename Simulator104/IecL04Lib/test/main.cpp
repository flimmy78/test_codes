#include "ace/ACE.h"
#include "../src/Iec104Server.h"


void notifyFunc(const char const* type,const char const*value)
{
	printf("%s  \r%s\n",type,value);
}

int  main(int argc, char *argv[])
{
	initService(notifyFunc);
	//Iec104ServerSingleton::instance()->start(notifyFunc);
	ACE_OS::sleep(2);

	finiService();
	return 0;
}
/*
typedef int (*PFUN)(void notifyFunc(const char const* ,const char const*));//声明函数原型
void runLibrary()
{
	HMODULE hModule = ::LoadLibrary("DllTest.dll");//加载DLL库
	PFUN newfun = (PFUN)::GetProcAddress(hModule,"fun");//取得fun函数的地址
	newfun(notifyFunc);
	::FreeLibrary(hModule);
}*/








