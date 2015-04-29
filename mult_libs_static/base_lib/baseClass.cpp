
#include "baseClass.h"

BaseClass* BaseClass::m_singleton = 0;

BaseClass::BaseClass()
{
	printf("in BaseClass\n");
}

BaseClass* BaseClass::getInstance()
{
	if (0 == m_singleton)
	{
		int i = 2;
		m_singleton = new BaseClass();
	}
	return m_singleton;
}

void testFuction()
{
	int i = 0;
}
