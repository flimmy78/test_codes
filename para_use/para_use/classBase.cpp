// para_use.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "classBase.h"

classBase::~classBase()
{
}

int classBase::printValue()
{
	printf("classBase::printValue %d\n", m_baseValue);
	return m_baseValue;
}

