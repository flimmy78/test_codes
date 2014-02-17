// stdafx.cpp : source file that includes just the standard includes
// mapVsVector.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "testObj.h"
#include <time.h>
#include <algorithm>
#include <stdlib.h>


ObjConstructor<NodeList> NodeList::myCon(10000);
ObjConstructor<Node> Node::myCon(10000);

std::vector<StringAndPointer>& getxx()
{
	std::vector<StringAndPointer>* t= new std::vector<StringAndPointer>();
	return *t;
}

std::vector<StringAndPointer>& g_vect = getxx();

testObj::testObj()
{
	m_size = 200;
	srand (time(NULL));

	int iSecret = rand() % 10 + 1;

	m_names.clear();
	for (int i = 0; i < m_size; ++i)
	{
		int j = rand() % 97 + 2;
		char buf[101] = {0};
		for (int k = 0; k < j; ++k)
		{
			buf[k] = rand() % 26 + 'a';
		}
		m_names.push_back(std::string(buf));
	}
}

int cmp2(const void * a, const void * b)
{
	//return ( *(int*)a - *(int*)b );
	if (g_vect[*(int*)a].name < g_vect[*(int*)b].name)
	{
		return -1;
	}
	if (g_vect[*(int*)a].name > g_vect[*(int*)b].name)
	{
		return 1;
	}
	return 0;
};

int cmp3(const void * a, const void * b)
{
	const std::string& sA = g_vect[*(int*)a].name;
	const std::string& sB = g_vect[*(int*)b].name;
	int lenA = sA.length(), lenB = sB.length();
	const char* pA = sA.c_str();
	const char* pB = sB.c_str();
	for (int i = 0; i < lenA && i < lenB; ++i)
	{
		if (pA[i] != pB[i])
		{
			return pA[i] - pB[i];
		}
	}
	return lenA - lenB;
};

void testObj::constructVector()
{
	int i = 0;
	std::vector<StringAndPointer> vct;
	vct.reserve(m_size);
	int* arr = new int[m_size];
	for (i = 0; i < m_size; ++i)
	{
		vct.push_back(StringAndPointer(m_names[i], 0));
		arr[i] = i;
	}
	//std::sort(m_vect.begin(), m_vect.end(), SPCmptor(m_vect));
	//std::sort(indexs.begin(), indexs.end());
	g_vect = vct;
	qsort(arr, m_size, sizeof(int), cmp3);
	
	for (i = 0; i < m_size; ++i)
	{
		m_vect.push_back(vct[arr[i]]);
	}
	//std::sort(indexs.begin(), indexs.end(), SPCmptor(vct));
}

void testObj::constructMap()
{
	int i = 0;
	for (i = 0; i < m_size; ++i)
	{
		m_map[m_names[i]] = 0;
	}
}

void testObj::constructTrie()
{
	NodeList* nLst = new NodeList();
	m_trie = new Node(0, 0, nLst);

	int i = 0;
	for (i = 0; i < m_size; ++i)
	{
		int strLen = m_names[i].length();
		char* ptr = new char[strLen + 1];	// mem leak.
		ptr[strLen] = 0;
		strcpy(ptr, m_names[i].c_str());
		m_trie->addNode(ptr, strLen);
	}
}

void testObj::findVector()
{
	int i = 0;
	for (i = 0; i < m_size; ++i)
	{
		int b = 0, e = m_size - 1, m = 0;
		while (b < e)
		{
			m = (b + e + 1) / 2;
			if (m_names[i] < m_vect[m].name)
			{
				e = m - 1;
			}
			else
			{
				b = m;
			}
		}
		if (m_names[i] != m_vect[b].name)
		{
			printf("error, %s\n", m_names[i].c_str());
			i = m_size;
		}
	}
}

void testObj::findMap()
{
	int i = 0;
	for (i = 0; i < m_size; ++i)
	{
		if (m_map.end() == m_map.find(m_names[i]))
		{
			printf("error, %s\n", m_names[i].c_str());
			i = m_size;
		}
	}
}

void testObj::findTrie()
{
	int i = 0;
	for (i = 0; i < m_size; ++i)
	{
		if (false == m_trie->find(m_names[i].c_str(), m_names[i].length()))
		{
			m_trie->find(m_names[i].c_str(), m_names[i].length());
			printf("error, %s\n", m_names[i].c_str());
			i = m_size;
		}
	}
}


bool NodeList::insert(Node* nd)
{
	if (m_curSize == m_revSize)
	{
		m_revSize = m_revSize * 2;
		Node** t = new Node*[m_revSize];
		for (int i = 0; i < m_curSize; ++i)
		{
			t[i] = m_nodeArr[i];
		}
		delete []m_nodeArr;
		m_nodeArr = t;
	}
	m_nodeArr[m_curSize++] = nd;
	return true;
}

bool NodeList::addNode(char* ptr, int len)
{
	for (int i = 0; i < m_curSize; ++i)
	{
		if (m_nodeArr[i]->addNode(ptr, len))
		{
			return true;
		}
	}
	// new one.
	NodeList* lst = new NodeList();
	Node* nd = new Node(ptr, len, lst);
	insert(nd);
	return true;
}

bool NodeList::find(const char* ptr, int len)
{
	bool bfind = false;
	for (int i = 0; i < m_curSize && !bfind; ++i)
	{
		bfind = m_nodeArr[i]->find(ptr, len);
	}
	return bfind;
}

bool Node::addNode(char* ptr, int len)
{
	if (0 == ptr || 0 == len)
	{
		return false; // should not in.
	}
	bool match = true;
	int i = 0;
	for (i = 0; i < m_length && i < len && match; ++i)
	{
		if (m_pChar[i] != ptr[i])
		{
			match = false;
			break;
		}
	}
	if (match)
	{
		if (m_length < len)
		{
			m_childs->addNode(ptr + m_length, len - m_length);
		}
		else if (m_length == len)
		{
			m_isEnd = true;
		}
		else
		{
			Node* nd = new Node(m_pChar + len, m_length - len, m_childs);	// mem leak.
			m_childs = new NodeList();
			m_childs->insert(nd);

			m_isEnd = true;
			m_length = len;
		}
		return true;
	}
	else if (i > 0)
	{
		Node* nd = new Node(m_pChar + i, m_length - i, m_childs);	// mem leak.
		m_childs = new NodeList();
		m_childs->insert(nd);

		NodeList* nLst = new NodeList();
		nd = new Node(ptr + i, len - i, nLst);
		m_childs->insert(nd);

		m_isEnd = false;
		m_length = i;

		return true;
	}
	return false;
}

bool Node::find(const char* ptr, int len)
{
	if (0 == ptr || 0 == len)
	{
		return false; // should not in.
	}
	if (len < m_length)
	{
		return false;
	}
	bool match = true;
	int i = 0;
	for (i = 0; i < m_length && i < len && match; ++i)
	{
		if (m_pChar[i] != ptr[i])
		{
			match = false;
			break;
		}
	}
	if (match)
	{
		if (m_length < len)
		{
			return m_childs->find(ptr + m_length, len - m_length);
		}
		else if (m_length == len)
		{
			return m_isEnd;
		}
	}
	return false;
}
