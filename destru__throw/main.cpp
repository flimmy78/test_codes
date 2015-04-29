
#include <stdio.h>

class BaseClass
{
public:
	BaseClass(){};
	~BaseClass()
	{
		int a = 2;
		throw a;
	}
	void fun(){};
};

class SubClass
{
public:
	SubClass()
	{
	};
	~SubClass()
	{
		throw 3;
	};
	void fun()
	{
		throw 23;
	};
	//BaseClass m_bs;
};

int main()
{

	try
	{
		SubClass a;
		a.fun();
	}
	catch(...)
	{
		int in = 2;
	}

	return 0;
}

