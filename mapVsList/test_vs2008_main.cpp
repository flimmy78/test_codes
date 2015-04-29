// test_vs2008_string.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "winThread.h"
#include "timeCounter.h"


#include <time.h>
#include <string>
#include <queue>
#include <map>
#include <list>
#include <vector>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

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

std::vector<pair<int, int>> g_operations;	//0, add; 1, remove.
void generateOperations(int nSize)
{
	srand (time(NULL));
	std::vector<int> existValues;
	existValues.clear();
	g_operations.clear();
	pair<int, int> vPair;
	int i = 0, j = 0;
	for (i = 0; i < nSize; ++i)
	{
		vPair.first = 0;
		vPair.second = i;
		g_operations.push_back(vPair);
		existValues.push_back(i);
		if (2 == i % 3)
		{
			int index = rand() % existValues.size();
			vPair.first = 1;
			vPair.second = existValues[index];
			g_operations.push_back(vPair);

			for (j = index; j + 1 < existValues.size(); ++j)
			{
				existValues[j] = existValues[j + 1];
			}
			existValues.pop_back();
			/*
			std::vector<int>::const_iterator it = existValues.begin();
			while (existValues[index] != (*it))
			{
				++it;
			}
			existValues.erase(it);*/
		}
	}
	while(existValues.size())
	{
		int index = rand() % existValues.size();
		vPair.first = 1;
		vPair.second = existValues[index];
		g_operations.push_back(vPair);

		for (j = index; j + 1 < existValues.size(); ++j)
		{
			existValues[j] = existValues[j + 1];
		}
		existValues.pop_back();
	}
}

void list_test(int nTimes)
{
	while (nTimes)
	{
		std::list<int> theList;
		theList.clear();
		int i = 0;
		for (i = 0; i < g_operations.size(); ++i)
		{
			if (0 == g_operations[i].first)
			{
				theList.push_back(g_operations[i].second);
			}
			else
			{
				std::list<int>::const_iterator it = theList.begin();
				while (g_operations[i].second != (*it))
				{
					++it;
				}
				theList.erase(it);
			}
		}
		--nTimes;
	}
}

void map_test(int nTimes)
{
	while (nTimes)
	{
		std::map<int, int> theMap;
		theMap.clear();
		int i = 0;
		for (i = 0; i < g_operations.size(); ++i)
		{
			if (0 == g_operations[i].first)
			{
				theMap[g_operations[i].second] = g_operations[i].second;
			}
			else
			{
				std::map<int, int>::const_iterator it = theMap.find(g_operations[i].second);
				theMap.erase(it);

				//theMap.erase(g_operations[i].second);
			}
		}
		--nTimes;
	}
}

void test_map_iterator()
{
	int i;
	std::map<int, int> myMap;
	for (i = 0; i < 10; ++i)
		myMap[i] = i;
	std::map<int, int>::const_iterator it = myMap.begin();
	while (myMap.end() != it)
		printf("%d, ", it->second), ++it;
	printf("\n");
	it = myMap.find(5);
	printf("%d, ", it->second);
	myMap.erase(it++);
	printf("%d, ", it->second);
	printf("\n");
}

int _tmain(int argc, _TCHAR* argv[])
{
	std::map<int, int> im;
	int y = im[2];
	return 0;
	test_map_iterator();
	{
		timeCounter a("generateOperations");
		generateOperations(2000);
	}
	{
		timeCounter a("list_test");
		list_test(500);
	}
	{
		timeCounter a("map_test");
		map_test(500);
	}

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
