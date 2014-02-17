// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <string>
#include <map>
#include <vector>


struct StringAndPointer
{
	std::string name;
	void*		ptr;

	StringAndPointer(){};
	StringAndPointer(std::string nm, void* p)
		:
		name(nm),
		ptr(p)
	{};
};

struct SPCmptor_a
{
	const bool operator() (const StringAndPointer& a, const StringAndPointer& b) const
	{
		return a.name < b.name;
	}

};

struct SPCmptor
{
	SPCmptor(std::vector<StringAndPointer>& vct):m_vect(vct){};
	const bool operator() (const int& a, const int& b) const
	{
		return m_vect[a].name < m_vect[b].name;
	}
	std::vector<StringAndPointer>& m_vect;

};

template<class _Ty>
class ObjConstructor
{
public:
	ObjConstructor(int reserveSize)
	{
		m_rSize = reserveSize;
		m_ObjSize = sizeof(_Ty);
		m_list.clear();
		m_curObjs = new char[m_ObjSize * m_rSize];
		m_list.push_back(m_curObjs);
		m_curIdx = 0;
	};

	void* getObjects(int nums)
	{
		if (m_rSize - m_curIdx < nums)
		{
			if (m_rSize < nums)
				return 0;
			m_curObjs = new char[m_ObjSize * m_rSize];
			m_list.push_back(m_curObjs);
			m_curIdx = 0;
		}
		char* p = m_curObjs + (m_curIdx * m_ObjSize);
		m_curIdx = m_curIdx + nums;
		return (void*)p;
	};

private:
	std::vector<char*> m_list;
	int m_rSize;
	int m_curIdx;
	int m_ObjSize;
	char* m_curObjs;
};

struct NodeList;

struct Node
{
	bool m_isEnd;
	char* m_pChar;
	int  m_length;
	NodeList* m_childs;
	static ObjConstructor<Node> myCon;
	
	Node(char* ptr, int len, NodeList* cld)
	{
		m_isEnd = true;
		m_pChar = ptr;
		m_length = len;
		m_childs = cld;
	}
	
	bool addNode(char* ptr, int len);
	bool find(const char* ptr, int len);

	void* operator new (std::size_t size) throw (std::bad_alloc){return myCon.getObjects(1);};
};

struct NodeList
{
	int m_curSize;
	int m_revSize;
	Node** m_nodeArr;
	static ObjConstructor<NodeList> myCon;

	NodeList()
	{
		m_curSize = 0;
		m_revSize = 4;
		m_nodeArr = new Node*[m_revSize];
	}

	bool insert(Node* nd);
	bool addNode(char* ptr, int len);

	bool find(const char* ptr, int len);

	void* operator new (std::size_t size) throw (std::bad_alloc){return myCon.getObjects(1);};
};

class testObj
{
public:
	testObj();
	void constructVector();
	void constructMap();
	void constructTrie();
	void findVector();
	void findMap();
	void findTrie();

	int cmp(const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	};

private:
	std::vector<StringAndPointer> m_vect;
	std::map<std::string, void*> m_map;
	std::vector<std::string>	m_names;
	int m_size;

	Node*	m_trie;
};

