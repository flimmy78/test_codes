
#include <stdio.h>

#define private public

#include "../base_lib/baseClass.h"
#include "../derived_lib1/dClass.h"
#include "../derived_lib2/dClass.h"

extern int a;
//extern double a;

//inline void dClass1::xxxx(){};
int main()
{
	printf("start testing...\n");
	dClass1 d1;
	dClass2 d2;
	//d2.priv();
	d1.xxxx();
	int aa = a;

	printf("end testing...\n");
	return 0;
}
