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

#define ProblemY Problem6

namespace ProblemY
{
	void init();
	void test();
	void test2();
};
using namespace ProblemY;

int _tmain(int argc, _TCHAR* argv[])
{
	
	{
		timeCounter a("case init");
		init();
	}
	{
		timeCounter a("case one");
		test();
	}
	{
		timeCounter a("case two");
		test2();
	}
	//Sleep(1000);
	return 0;
}

namespace ProblemX
{

	void init()
	{
	}
	void test()
	{
	}
	void test2()
	{
	}
};

namespace Problem6
{//判断整数序列是不是二元查找树的后序遍历结果
//题目：输入一个整数数组，判断该数组是不是某二元查找树的后序遍历的结果。如果是返回true，否则返回false。

	int* gArr = 0;
	int gN = 0;
	void init()
	{
		gN = 7;
		gArr = new int[gN];
		gArr[0] = 5;
		gArr[1] = 7;
		gArr[2] = 6;
		gArr[3] = 9;
		gArr[4] = 11;
		gArr[5] = 10;
		gArr[6] = 8;
	}
	void init2()
	{
		gN = 9;
		gArr = new int[gN];
		gArr[0] = 5;
		gArr[1] = 7;
		gArr[2] = 6;
		gArr[3] = 9;
		gArr[4] = 12;
		gArr[5] = 15;
		gArr[6] = 14;
		gArr[7] = 10;
		gArr[8] = 8;
	}
	void init3()
	{		
		gN = 4;
		gArr = new int[gN];
		gArr[0] = 7;
		gArr[1] = 4;
		gArr[2] = 6;
		gArr[3] = 5;
	}

	bool niceRelative(int gp, int p, int you)
	{
		if (gp > p)
		{
			return (gp > you);
		}
		if (gp < p)
		{
			return (gp < you);
		}
		return false;
	}

	//left smallest, right biggest. parent index.
	void doIt(int leftIndex, int rightIndex, int pIndex, int& currentIndex)
	{
		if (currentIndex < 0)
		{
			return;
		}
		if (-1 == pIndex)
		{
			pIndex = currentIndex;
			currentIndex = currentIndex -1;
			doIt(leftIndex, rightIndex, pIndex, currentIndex);
			printf("%d ", gArr[pIndex]);
			return ;
		}

		if (gArr[currentIndex] > gArr[pIndex])
		{//rigth;
			if (-1 == rightIndex || niceRelative(gArr[rightIndex], gArr[pIndex], gArr[currentIndex]))
			{
				int tp = currentIndex;
				currentIndex = currentIndex - 1;
				doIt(pIndex, rightIndex, tp, currentIndex);
				printf("%d ", gArr[tp]);
			}
		}
		if (gArr[currentIndex] < gArr[pIndex])
		{//left.
			if (-1 == leftIndex || niceRelative(gArr[leftIndex], gArr[pIndex], gArr[currentIndex]))
			{
				int tp = currentIndex;
				currentIndex = currentIndex - 1;
				doIt(leftIndex, pIndex, tp, currentIndex);
				printf("%d ", gArr[tp]);
			}
		}
	}

	void test()
	{
		init2();
		int index = gN - 1;
		doIt(-1, -1, -1, index);
		if (-1 == index)
		{
			printf("true\n");
		}
		else
		{
			printf("false\n");
		}
	}

	bool verifyXX(int* a, int n)
	{
		if (n <= 1)
			return true;

		int i = 0;
		int rootValue = a[n - 1];
		i = n - 2;
		while (i >= 0)
		{// right sub tree;
			if (a[i] < rootValue)
			{
				break;
			}
			--i;
		}
		int j = i;
		while (j >= 0)
		{// left sub tree.
			if (a[j] > rootValue)
			{
				return false;
			}
			--j;
		}
		bool right = verifyXX(a + ( i + 1), (n - 2) - i);
		bool left  = verifyXX(a, i + 1);
		return (right && left);
	}

	void test2()
	{
		init3();
		if (verifyXX(gArr, gN))
		{
			printf("true\n");
		}
		else
		{
			printf("false\n");
		}
	}
};

namespace Problem5
{//查找最小的k 个元素
//题目：输入n 个整数，输出其中最小的k 个。 例如输入1，2，3，4，5，6，7 和8 这8 个数字，则最小的4 个数字为1，2，3 和4。

	void initA(int*& a, int n)
	{
		int c0 = 0;
		a = new int[n];
		int i = 0;
		while (i < n)
		{
			a[i] = rand();
			if (a[i] < 0)
				a[i] = - a[i];
			if (0 == a[i])
				++c0;
			++i;
		}
		printf("c0 = %d\n", c0);
	}
	void printArr(int* a, int n)
	{
		int i = 0;
		while (i < n)
		{
			printf("i%d:%d ", i, a[i]);
			++i;
		}
		printf("\n");
	}
	void copyArr(int*& a, int* from, int n)
	{
		a = new int[n];
		int i = 0;
		while (i < n)
		{
			a[i] = from[i];
			++i;
		}
	}

	int* gArr = 0;
	int gn = 50 * 10000;
	int gk = 20;
	void init()
	{
		initA(gArr, gn);
	}
	void test()
	{
		int* a = 0;
		int n = gn;
		int k = gk;
		copyArr(a, gArr, n);
		int i = 0, j = 0, t = 0;
		i = 1;
		while (i < k)
		{
			j = i;
			int c = (j - 1) / 2;
			while (a[j] > a[c])
			{
				t = a[j];
				a[j] = a[c];
				a[c] = t;
				j = c;
				c = (j- 1) / 2;
			}
			++i;
		}
		printArr(a, k);
		
		i = k;
		while (i < n)
		{
			if (a[i] < a[0])
			{
				j = 0;
				a[0] = a[i];
				while (true)
				{
					int c = j * 2 + 1;
					if (c + 1 < k && a[c] < a[c + 1])
					{
						c = c + 1;	// bigger child.
					}
					if (c < k && a[c] > a[j])
					{
						t = a[j];
						a[j] = a[c];
						a[c] = t;
						j = c;
					}
					else
					{
						break;
					}
				}
			}
			++i;
		}
		printArr(a, k);
	}

	void merge_k(int* a, int* tmp, int start, int mid, int end, int k)
	{
		int i = start;
		int j = mid + 1;
		int index = 0;
		while (i <= mid && j <= end)
		{
			if (a[j] < a[i])
			{
				tmp[index] = a[j];
				++index;
				++j;
			}
			else
			{
				tmp[index] = a[i];
				++index;
				++i;
			}
			if (index == k)
				break;
		}
		while (i <= mid)
		{
			tmp[index] = a[i];
			++index;
			++i;
			if (index == k)
				break;
		}
		while (j <= end)
		{
			tmp[index] = a[j];
			++index;
			++j;
			if (index == k)
				break;
		}
		i = 0;
		j = start;
		while (j <= end && i < k)
		{
			a[j] = tmp[i];
			++i;
			++j;
		}
	}

	void merge_sort_k(int* a, int* tmp, int start, int end, int k)
	{
		if (start == end)
			return;
		int mid = (start + end) / 2;
		merge_sort_k(a, tmp, start, mid, k);
		merge_sort_k(a, tmp, mid + 1, end, k);
		merge_k(a, tmp, start, mid, end, k);
	}

	void test2()
	{
		int* a = 0;
		int* tmp = new int[gn];
		copyArr(a, gArr, gn);
		merge_sort_k(a, tmp, 0, gn - 1, gk);
		printArr(a, gk);
	}
};

namespace Problem3
{//求子数组的最大和
//题目：输入一个整形数组，数组里有正数也有负数。数组中连续的一个或多个整数组成一个子数组，每个子数组都有一个和。求所有子数组的和的最大值。要求时间复杂度为O(n)。
	//例如输入的数组为1, -2, 3, 10, -4, 7, 2, -5，和最大的子数组为3, 10, -4, 7, 2，因此输出为该子数组的和18。
	int biggestSubSum()
	{
		int arr[] = {1, -2, 3, 10, -4, 7, 2, -5};
		int size = 8;
		int i = 1, sum = arr[0], biggest = arr[0];
		while (i < size)
		{
			if (sum < 0)
				sum = 0;
			sum = sum + arr[i];
			if (sum > biggest)
				biggest = sum;
			++i;
		}
		printf("biggest sum:%d\n", biggest);
		return biggest;
	};
	void test()
	{
		biggestSubSum();
	}
	void test2()
	{
	}
};

namespace Problem2
{//设计包含min 函数的栈
	//题目：定义栈的数据结构，要求添加一个min 函数，能够得到栈的最小元素。要求函数min、push 以及pop 的时间复杂度都是O(1)。
	template <typename T> class MinStack
	{
	public:
		MinStack(void) {}
		virtual ~MinStack(void) {}
		T& top(void)
		{
			return m_datas.back();
		}
		const T& top(void) const;
		void push(const T& value)
		{
			m_datas.push_back(value);
			if (0 == m_minValueIndexs.size())
			{
				m_minValueIndexs.push_back(0);
			}
			else
			{
				if (value < m_datas[m_minValueIndexs.back()])
				{
					m_minValueIndexs.push_back(m_minValueIndexs.size());
				}
				else
				{
					m_minValueIndexs.push_back(m_minValueIndexs.back());
				}
			}
		}
		void pop(void)
		{
			m_datas.pop_back();
			m_minValueIndexs.pop_back();
		}

		const T& minFun(void) const
		{
			return m_datas[m_minValueIndexs.back()];
		}
	private:
		std::vector<T> m_datas;
		std::vector<int> m_minValueIndexs;
	};
	void test()
	{
		MinStack<int> ms;
		ms.push(10);
		printf("%d ", ms.minFun());
		ms.push(11);
		printf("%d ", ms.minFun());
		ms.push(8);
		printf("%d ", ms.minFun());
		ms.push(3);
		printf("%d ", ms.minFun());
	}
	void test2()
	{
	}
};

namespace Problem1
{// 把二元查找树转变成排序的双向链表.
	// 题目：输入一棵二元查找树，将该二元查找树转换成一个排序的双向链表。要求不能创建任何新的结点，只调整指针的指向。
	struct Node
	{
		Node(int v){value = v; left = 0; right = 0;};
		int value;
		Node* left;
		Node* right;
		void insert(Node* node)
		{
			if (node->value < value)
			{
				if (0 == left)
				{
					left = node;
				}
				else
				{
					left->insert(node);
				}

			}
			else
			{
				if (0 == right)
				{
					right = node;
				}
				else
				{
					right->insert(node);
				}
			}
		}
		static Node* toLink(Node* node, Node*& mLeft, Node*& mRight)
		{
			Node* tmp = 0;
			Node* pl1 = 0, *pl2 = 0;
			Node* pr1 = 0, *pr2 = 0;
			if(node->left)
			{
				tmp = toLink(node->left, pl1, pl2);
			}
			printf("%d ", node->value);
			if(node->right)
			{
				tmp = toLink(node->right, pr1, pr2);
			}
			if (pl2)
			{
				pl2->right = node;
				node->left = pl2;
			}
			if (pr1)
			{
				pr1->left = node;
				node->right = pr1;
			}
			mLeft = pl1;
			if (0 == mLeft)
			{
				mLeft = node;
			}
			mRight = pr2;
			if (0 == mRight)
			{
				mRight = node;
			}
			return node;
		}

		static void mostLeft(Node* node, Node*& mLeft)
		{
			if (node->right)
			{
				mostLeft(node->right, mLeft);
			}
			if (mLeft)
			{
				mLeft->left = node;
				node->right = mLeft;
			}
			mLeft = node;
			
			if (node->left)
			{
				mostLeft(node->left, mLeft);
			}
		}
	};

	void test()
	{
		printf("started\n");
		int i = 0;
		Node* root = new Node(10);
		root->insert(new Node(6));
		root->insert(new Node(4));
		root->insert(new Node(8));
		root->insert(new Node(14));
		root->insert(new Node(12));
		root->insert(new Node(16));
		Node* p1, *p2;
		printf("old: ");
		Node::toLink(root, p1, p2);
		printf("\nok\n");
		printf("new: ");
		while (p1)
		{
			printf("%d ", p1->value);
			p1 = p1->right;
		}
		printf("\nfinished\n");
		printf("new: ");
		while (p2)
		{
			printf("%d ", p2->value);
			p2 = p2->left;
		}
		printf("\nfinished\n");
	}

	void test2()
	{
		printf("started\n");
		int i = 0;
		Node* root = new Node(10);
		root->insert(new Node(6));
		root->insert(new Node(4));
		root->insert(new Node(8));
		root->insert(new Node(14));
		root->insert(new Node(12));
		root->insert(new Node(16));
		Node* p1 = 0;
		printf("old: ");
		Node::mostLeft(root, p1);
		printf("\nok\n");
		printf("new: ");
		while (p1)
		{
			printf("%d ", p1->value);
			p1 = p1->right;
		}
		printf("\nfinished\n");
	}
};
