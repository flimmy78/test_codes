
//#define private public
#include "dClass.h"
#include "../base_lib/baseClass.h"

double a = 2;

dClass2::dClass2()
{
	printf("in dClass2\n");
	BaseClass* t = BaseClass::getInstance();
	printf("BaseClass* is %d\n", t);
	testFuction();
}

void dClass2::priv()
{
};