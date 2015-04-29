// para_use.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "myClass.h"

int _tmain(int argc, _TCHAR* argv[])
{
	myClass a(1);
	a.addBigOne(1, 2);
	#pragma message("hello")
	//a.m_n = 2;
	return 0;
}
