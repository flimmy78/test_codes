
#include "dClass.h"
#include "../base_lib/baseClass.h"

int a = 1;

dClass1::dClass1()
{
	printf("in dClass1\n");
	BaseClass* t = BaseClass::getInstance();
	printf("BaseClass* is %d\n", t);
	xxxx();
}

void dClass1::classFunc1()
{
	testFuction();
}

void dClass1::xxxx(){};

void gg(){};

