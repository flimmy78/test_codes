// para_use.cpp : Defines the entry point for the console application.
//

#ifndef __CLASSBASE_H__
#define __CLASSBASE_H__

#include "stdafx.h"

//#define private public

class classBase
{
//private:
	int m_baseValue;
public:
	classBase(int a)
	{
		m_baseValue = a;
	}
	~classBase();
	int printValue();
	virtual void baseInterface() = 0;
};
//#undef private

#endif
