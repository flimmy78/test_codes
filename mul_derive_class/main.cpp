
#include <stdio.h>
class Base1
{
	int m_Base1;
	//int m_Base;
};

class Base2
{
	int m_Base2;
};

class myClass: public Base1, public Base2
{
};

class A
{
public: int a;
protected: int b;
private: int c;
};

class B: public A
{
friend class F;
private: int d;
};

class F
{
public:
	F()
	{
		B b;
		b.a = 0;
		b.b = 0;
		//b.c = 0;
		b.d = 0;
	}
};

int main()
{
	F f;
	

	myClass* p = new myClass();
	printf("p = %d\n", p);


	Base1* p1 = p;
	printf("p1 = %d\n", p1);

	Base2* p2 = p;
	printf("p2 = %d\n", p2);

	myClass* p3 = (myClass*)p2;
	printf("p3 = %d\n", p3);

	myClass& ref = *p;
	printf("&ref=%d\n", &ref);

	return 0;
}
