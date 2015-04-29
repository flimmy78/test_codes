
#include <stdio.h>

class Base2
{
public:
	Base2(int a)
	{
		printf("Base2this:%d, member:%d, sizeof():%d\n", this, &m_value, sizeof(Base2));
	}
private:
	int m_value;
};

class Base
{
public:
	Base(int n)
	{
		m_value = n;
		printf("Base this:%d, member:%d, sizeof():%d\n", this, &m_value, sizeof(Base));
	};
//	Base()
//	{
//	};
private:
	int m_value;
};

class subClass1: virtual Base, virtual Base2
{
public:
	subClass1(int n):
	  Base(n), Base2(n)
	 {
		  m_value1 = n;
		  int adds = *(int*)this;
		  int vv = *((int*)adds + 1);
		  printf("subClass1:%d, member:%d, sizeof():%d, *this:%d\n", this, &m_value1, sizeof(subClass1), vv);
	  };
private:
	int m_value1;
	int m_arr1[2];
};

class subClass2: virtual Base, virtual Base2
{
public:
	subClass2(int n):
	  Base(n), Base2(n)
	 {
		  m_value1 = n;
		  int adds = *(int*)this;
		  int vv = *((int*)adds + 1);
		  printf("subClass2:%d, member:%d, sizeof():%d, *this:%d\n", this, &m_value1, sizeof(subClass2), vv);
	  };
private:
	int m_value1;
	int m_arr2[3];
};

class myClass: subClass1, subClass2//, Base2
{
public:
	myClass(int n):
	  subClass1(n), subClass2(n), Base(n), Base2(n) // must init Base.
	 {
		  m_myvalue = n;
		  printf("myClass  :%d, member:%d, sizeof():%d\n", this, &m_myvalue, sizeof(myClass));
	 };
private:
	int m_myvalue;
	int m_arr[4];
};

class BaseInterface
{
public:
	virtual void fun() = 0;
};

class BaseImpt: public BaseInterface
{
public:
	void fun(){};
};

class MyInterface: public BaseInterface
{
public:
	virtual void myFun() = 0;
};

class MyImpt : public virtual BaseImpt, public virtual MyInterface
{
public:
	void myFun() {};
	//void fun() {};
};

int main()
{
	//myClass a(2);
	//MyImpt* x = new MyImpt;
	//x->fun();
	return 0;
}


/*
--------memory mode:
E:\test_code\test_vitual_class>cl main.cpp /d1reportSingleClassLayoutmyClass
Microsoft (R) 32-bit C/C++ Optimizing Compiler Version 15.00.30729.01 for 80x86
Copyright (C) Microsoft Corporation.  All rights reserved.

main.cpp
class myClass   size(64):
        +---
        | +--- (base class subClass1)
 0      | | {vbptr}
 4      | | m_value1
 8      | | m_arr1
        | +---
        | +--- (base class subClass2)
16      | | {vbptr}
20      | | m_value1
24      | | m_arr2
        | +---
36      | m_myvalue
40      | m_arr
        +---
        +--- (virtual base Base)
56      | m_value
        +---
        +--- (virtual base Base2)
60      | m_value
        +---

myClass::$vbtable@subClass1@:
 0      | 0
 1      | 56 (myClassd(subClass1+0)Base)
 2      | 60 (myClassd(subClass1+0)Base2)

myClass::$vbtable@subClass2@:
 0      | 0
 1      | 40 (myClassd(subClass2+0)Base)
 2      | 44 (myClassd(subClass2+0)Base2)


vbi:       class  offset o.vbptr  o.vbte fVtorDisp
            Base      56       0       4 0
           Base2      60       0       8 0


-------------test result:
Base this:1244968, member:1244968, sizeof():4
Base2this:1244972, member:1244972, sizeof():4
subClass1:1244912, member:1244916, sizeof():24, *this:56
subClass2:1244928, member:1244932, sizeof():28, *this:40
myClass  :1244912, member:1244948, sizeof():64
Press any key to continue . . .

------------
vbtable struc
	x1 dw ?
	offset dw ?
	x2 dw ?
vbtable end
from: http://www.docin.com/p-347257037.html, 反汇编角度分析VC++面向对象机制
http://www.cnblogs.com/itech/archive/2009/03/01/1399996.html, [C++对象模型][9]虚继承与虚函数表
*/
