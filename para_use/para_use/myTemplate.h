// para_use.cpp : Defines the entry point for the console application.
//

#ifndef __MYTEMPLATE_H__
#define __MYTEMPLATE_H__

#include "stdafx.h"

//#define private public

template <class T>
class myTemplate
{
public:
	myTemplate(T v)
	{
		printf("in myTemplate::myTemplate"); 
		m_member = v;
	};
	~myTemplate(){};
	void multiIt(T v)
	{
		m_member = m_member * v;
	};
	T getValue()
	{
		printf("in myTemplate::getValue");
		return m_member;
	};
private:
	T m_member;
};
//#undef private

#pragma instantiate myTemplate<int>
#pragma instantiate myTemplate<double>

#endif
