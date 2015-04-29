// para_use.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "myTemplate.h"

#pragma instantiate myTemplate<double>

/*
template <class T>
myTemplate<T>::myTemplate(T v)
{
	m_member = v;
}

template <class T>
myTemplate<T>::~myTemplate()
{
}

template <class T>
T myTemplate<T>::getValue()
{
	printf("in myTemplate::getValue");
	return m_member;
}
*/