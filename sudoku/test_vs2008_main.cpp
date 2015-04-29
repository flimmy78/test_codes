#include "stdafx.h"
#include <stdio.h>
#include <windows.h>

int g_in_times = 0;

int g_buf[81];

bool setijNode(int index, int v);

void output()
{
	int i = 0;
	for (i = 0; i < 81; ++i)
	{
		printf( "%d", g_buf[i]);
	}
	printf( "\n");
}

class ListNode;
class CellNode
{
public :
	int index;
	int optionNum;
	int options[10];     // [i], option i used times. if = 0, then can using.

	ListNode* affecteList;

	int affecteNum;
	int affectes[20][3];   //0: index, 1: optionNum, 2:options[v];
};

class ListNode
{
public:
	int value;     // cell index.
	int index;     // my index;
	ListNode* next;
};
int g_relative_index[81][20];
const int g_relative_index_size = 20; //8 + (4 * 3); exclusive itself.
CellNode g_allNode[81];

const int g_listSize = 81 * 21;        // with head;
ListNode* g_ListNode = new ListNode[g_listSize];
int     g_listIndex[g_listSize];
int g_listIndexFlag = 0;

ListNode* getListNode()
{
	if (0 == g_listIndexFlag)
	{
		int error = 1;
	}
	ListNode* nd = &g_ListNode[g_listIndex[--g_listIndexFlag]];
	return nd;
}

void returnListNode(ListNode* node)
{
	g_listIndex[g_listIndexFlag++] = node->index;
}

void gen_relative_index()
{
	int i, j, k, v;
	int t_buf[81][81] = {0};
	for (i = 0; i < 81; ++i)
	{
		int x = i % 9;
		for (j = 0; j < 9; ++j)
		{
			v = x + (j * 9);
			t_buf[i][v] = 1;
		}
		int y = i / 9 * 9;
		for (j = 0; j < 9; ++j)
		{
			v = y + j;
			t_buf[i][v] = 1;
		}
		x = (i % 9) / 3 * 3;
		y = (i / 9) / 3 * 3;
		for (j = 0; j < 3; ++j)
			for (k = 0; k < 3; ++k)
			{
				v = (y + j) * 9 + (x + k);
				t_buf[i][v] = 1;
			}
	}

	for (i = 0; i < 81; ++i)
	{
		int* pInt = g_relative_index[i];
		int nSize = 0;
		for (j = 0; j < 81; ++j)
		{
			if (j != i && t_buf[i][j])
				pInt[nSize++] = j;
		}
		if (nSize != g_relative_index_size)
		{
			int error = 1;
		}
	}
};

void initNode()
{
	int i = 0, j = 0;
	g_listIndexFlag = 0;
	for (i = 0; i < g_listSize; ++i)
	{
		g_ListNode[i].index = i;
		g_listIndex[g_listIndexFlag++] = i;
	}

	for (i = 0; i < 81; ++i)
	{
		CellNode& node = g_allNode[i];
		node.index = i;
		node.optionNum = 9;
		for (j = 0; j < 10; ++j)
		{
			node.options[j] = 0;
		}
		node.affecteList = getListNode();
		ListNode* head = node.affecteList;
		head->next = 0;

		for (j = 0; j < g_relative_index_size; ++j)
		{
			ListNode* nd = getListNode();
			nd->next = 0;
			nd->value = g_relative_index[i][j];
			head->next = nd;
			head = nd;
		}
	}       
}

int readNode()
{
	char* t1 = ".2738..1..1...6735.......293.5692.8...........6.1745.364.......9518...7..8..6534." ;      // poj: 3074.
	char* t2 = "......52..8.4......3...9...5.1...6..2..7........3.....6...1..........7.4.......3." ;
	char* t3 = "8..........36......7..9.2...5...7.......457.....1...3...1....68..85...1..9....4.." ;      //from:http://news.xinhuanet.com/local/2013-05/26/c_115911023.htm
	char* t4 = "..53.....8......2..7..1.5..4....53...1..7...6..32...8..6.5....9..4....3......97.." ; //from:http://tieba.baidu.com/p/866967969
	char* t5 = "....75....1..2.....4...3...5.....3.2...8...1.......6.....1..48.2........7........" ;
	char* t6 = "....14....3....2...7..........9...3.6.1.............8.2.....1.4....5.6.....7.8..." ;
	//527389416819426735436751829375692184194538267268174593643217958951843672782965341
	//416837529982465371735129468571298643293746185864351297647913852359682714128574936
	//812753649943682175675491283154237896369845721287169534521974368438526917796318452
	//t4-145327698839654127672918543496185372218473956753296481367542819984761235521839764
	//sample input:
	//....75....1..2.....4...3...5.....3.2...8...1.......6.....1..48.2........7........     
	//....14....3....2...7..........9...3.6.1.............8.2.....1.4....5.6.....7.8...
	//sample output:
	//932475861617928534845613279568741392429836715173259648356192487294387156781564923
	//962314857134587269578296413847962531651873942329145786285639174793451628416728395
	int i = 0, j = 0;
	char t[100] = {0};
	scanf( "%s", &t);
	if ('e' == t[0])
		return 0;
	int words = 81;

	for (i = 0; i < 81; ++i)
	{
		g_buf[i] = 0;
	}
	for (i = 0; i < words; ++i)
	{
		if ('.' != t[i])
		{
			g_buf[i] = t[i] - '0';
			setijNode(i, g_buf[i]);
			g_allNode[i].optionNum = 0; //fixed.
		}
	}
	return 1;
}

bool setijNode(int index, int v)
{
	g_buf[index] = v;
	int i = 0;
	int r_index;
	bool setOk = true ;
	CellNode& myNode = g_allNode[index];
	int affecteNum = 0;
	ListNode* head = myNode.affecteList->next;
	while (head)
	{
		if (0 != g_buf[head->value])
		{
			int error = 1;
		}
		r_index = head->value;
		CellNode& node = g_allNode[r_index];
		myNode.affectes[affecteNum][0] = r_index;
		myNode.affectes[affecteNum][1] = node.optionNum;
		myNode.affectes[affecteNum][2] = node.options[v];
		++affecteNum;
		//---
		if (0 == node.options[v])
			node.optionNum = node.optionNum - 1;
		if (0 == node.optionNum)
			setOk = false;
		node.options[v] = node.options[v] + 1;

		ListNode* pre = node.affecteList;
		ListNode* it = pre->next;
		while (it)
		{
			if (index == it->value)
			{
				pre->next = it->next;
				returnListNode(it);
				break;
			}
			pre = it;
			it = it->next;
		}
		if (0 == it)
		{
			int error = 1;
		}

		head = head->next;
	}
	myNode.affecteNum = affecteNum;
	return setOk;
}

void unsetijNode(int index, int v)
{
	g_buf[index] = 0;
	int i = 0;
	int r_index;
	CellNode& myNode = g_allNode[index];
	int affecteNum = myNode.affecteNum;
	for (i = 0; i < affecteNum; ++i)
	{
		r_index = myNode.affectes[i][0];
		CellNode& node = g_allNode[r_index];
		node.optionNum  = myNode.affectes[i][1];
		node.options[v] = myNode.affectes[i][2];

		ListNode* newNode = getListNode();
		newNode->value = index;
		newNode->next = node.affecteList->next;
		node.affecteList->next = newNode;
	}
	myNode.affecteNum = 0;
}

bool findNodeSet()
{
	++g_in_times;
	int i = 0, min_index = 0, num, preMin;
	min_index = -1;
	preMin = 99;
	for (i = 0; i < 81; ++i)
	{
		if (0 == g_buf[i])
		{
			num = g_allNode[i].optionNum;
			if (preMin > num)
			{
				preMin = num;
				min_index = i;
			}
		}
	}
	//printf("times:%d, index:%d\n", g_in_times, min_index);
	if (-1 != min_index)
	{
		CellNode& node = g_allNode[min_index];
		for (i = 1; i < 10; ++i)
		{
			if (0 == node.options[i])
			{
				bool b = setijNode(min_index, i);
				if (b && findNodeSet())
					return true ;
				unsetijNode(min_index, i);
			}
		}
		return false ;
	}
	return true ;
}

int main()
{
	gen_relative_index();
	while(true )
	{
		g_in_times = 0;
		int st = GetTickCount();
		initNode();
		if (0 == readNode())
			break;
		findNodeSet();
		output();
		printf("g_in_times:%d, %d ms\n", g_in_times, GetTickCount() - st);
	}
	return 0;
}

