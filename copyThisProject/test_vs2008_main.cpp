// test_vs2008_string.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "winThread.h"
#include "timeCounter.h"


#include <time.h>
#include <string>
#include <queue>
#include <map>
#include <vector>
#include <iostream>
#include <stdio.h>

using namespace std;

class myAddTask : public IThreadTask
{
public:
	void executeTask()
	{
		int a = 0;
		int i = 0;
		while (i < 100 * 100)
		{
			a = a + i;
			++i;
		}
		printf ("finished executeTask, a=%d\n", a);
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	{
		timeCounter a("case one");
		myAddTask task;
		WinThread t(&task);
		t.start();
		t.waitFinish(1000 * 1000);
	}
	//Sleep(1000);
	return 0;
}
