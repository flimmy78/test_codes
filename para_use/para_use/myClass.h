// para_use.cpp : Defines the entry point for the console application.
//

#ifndef __MYCLASS_H__
#define __MYCLASS_H__

#include "stdafx.h"
#include "classBase.h"

//#define private public
//class classBase;

class myClass: public classBase
{
//private:
	int m_n;
//	classBase* m_base;
public:
	myClass(int a);
	~myClass();
	int getIntValue();
	void setValue(int a);
	void addBigOne(int a, int b);
	void writeToFile();
	void baseInterface();

};
//#undef private

#endif
