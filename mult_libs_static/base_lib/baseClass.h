
#include <stdio.h>
#ifndef RTUOUTPUTWORKER_H
#define RTUOUTPUTWORKER_H
class BaseClass
{
public:
	BaseClass();
	static BaseClass* getInstance();

	static BaseClass* m_singleton;
};

void testFuction();

static int testI = 0;

#endif  // RTUOUTPUTWORKER_H

