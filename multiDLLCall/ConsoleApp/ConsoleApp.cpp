// ConsoleApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../InstanceA/InstanceA.h"
#include "../InstanceB/InstanceB.h"

//#pragma comment(lib, "../debug/InstanceA.lib")

int _tmain(int argc, _TCHAR* argv[])
{
	printf("Start...\n");

	InstanceA*  pA= new InstanceA();
	printf("InstaceA this is:%d, base is %d\n", pA, pA->GetBaseClass());

	InstanceB*  pB= new InstanceB();
	printf("InstaceB this is:%d, base is %d\n", pB, pB->GetBaseClass());

	printf("end.\n");
	return 0;
}

