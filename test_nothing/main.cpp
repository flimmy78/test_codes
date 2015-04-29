
#include <stdio.h>
#include <windows.h>

int g_ListCount = 9999999;
int g_pushList[50][50];

bool doit(int* datas, int nums, int indx, int nPushed, int* pushList, bool* bUpList)
{
	if (indx == nums && nPushed < g_ListCount)
	{
		g_ListCount = nPushed;
		return true;
	}
	if (indx >= nums || nPushed >= g_ListCount)
	{
		return false;
	}

	int i = 0;
	int theData = datas[indx];
	int findIndx = -1, findIndx2 = -1;

	//int tPushList[50];
	int* tPushList = g_pushList[indx];
	bool tbUpList[50];
	//for (i = 0; i < nPushed; ++i)
	{
	}

	for (i = 0; i < nPushed; ++i)
	{
		tPushList[i] = pushList[i];
		tbUpList[i] = bUpList[i];
		// up
		if (theData >= pushList[i] && 1 == bUpList[i])
		{
			if (-1 == findIndx || pushList[i] >= pushList[findIndx])
			{
				findIndx = i;
			}
		}
		// down
		if (theData < pushList[i] && 0 == bUpList[i])
		{
			if (-1 == findIndx2 || pushList[i] >= pushList[findIndx2])
			{
				findIndx2 = i;
			}
		}
	}
	//up
	if (-1 != findIndx)
	{
		tPushList[findIndx] = theData;
		doit (datas, nums, indx + 1, nPushed, tPushList, tbUpList);	
	}
	else if (nPushed + 1 < g_ListCount)
	{
		tPushList[nPushed] = theData;
		tbUpList[nPushed] = 1;
		doit (datas, nums, indx + 1, nPushed + 1, tPushList, tbUpList);
	}

	// down
	if (-1 != findIndx2)
	{
		tPushList[findIndx2] = theData;
		doit (datas, nums, indx + 1, nPushed, tPushList, tbUpList);
	}
	else if (nPushed + 1 < g_ListCount)
	{
		tPushList[nPushed] = theData;
		tbUpList[nPushed] = 0;
		doit (datas, nums, indx + 1, nPushed + 1, tPushList, tbUpList);
	}
	return true;
}

int main()
{
	g_ListCount = 9999999;
	int t1 = GetTickCount();

	//int datas[50] = {7,2,5,9,6,8,3,1,4};
	//int datas[50] = {35, 28, 19, 39, 3, 13, 40, 25, 17, 1, 2, 23, 27, 7, 29, 36, 9, 18, 4, 8, 38, 32, 30, 24, 14, 15, 11, 26, 34, 37, 31, 20, 33, 22, 21, 16, 12, 5, 6, 10};
	int datas[50] = {37, 49, 8, 25, 47, 39, 7, 15, 9, 44, 11, 34, 43, 26, 38, 36, 10, 18, 19, 33, 28, 22, 13, 24, 41, 35, 3, 16, 12, 4, 42, 32, 21, 1, 17, 14, 48, 5, 6, 45, 20, 23, 27, 40, 31, 46, 2, 29, 30, 50};
	int pushList[50];
	bool bUps[50];
	doit(datas, 50, 0, 0, pushList, bUps);
	printf("%d\n", g_ListCount);
	printf("%d\n", GetTickCount() - t1);
	return 0;
}

