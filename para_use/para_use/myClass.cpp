// para_use.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "myClass.h"
#include "classBase.h"
#include "myTemplate.h"
#include "../myLib/myXxxx.h"

myClass::myClass(int a) : classBase(2)
{
	m_n = a;
	//m_base = new classBase(2);
}

myClass::~myClass()
{
}

int myClass::getIntValue()
{
	printStr("in myClass getIntValue call");
	printStr2("in myClass getIntValue call");
	addBigOne(0, 0);
	printf("in getIntValue function\n");
	myTemplate<int> intValue(20);
	int xx = intValue.getValue();
	return m_n;
}

void myClass::setValue(int a)
{
	m_n = a;
	getIntValue();
}

void myClass::addBigOne(int a, int b)
{
	if (a > b)
		m_n = m_n + a;
	else
		m_n = m_n + b;
//	writeToFile();
}

void myClass::writeToFile()
{
	printf("in writeToFile\n");
	//m_base->printValue();
}

void myClass::baseInterface()
{
	printf("in myClass::baseInterface\n");
}