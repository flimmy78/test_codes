
#include <stdio.h>
#include <windows.h>
#include "base_header.h"

class myClass
{
	int* a;
public:
	myClass(){a = 0;};
	~myClass()
	{
		if(a)
			delete a;
	};
	static int* get_int();
	int* get_int_()
	{
		if(0 == a)
		{
			a = new int;
		}
		return a;
	};
};

myClass g_myClass;
int* myClass::get_int()
{
	return g_myClass.get_int_();
}

int main()
{
	int a = get_value();
	int b = get_value2();
	int* p = myClass::get_int();
	return 0;
}
