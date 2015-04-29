
#include <stdio.h>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <windows.h>
#include <sys\timeb.h>

#define private public

#include "classA.h";

int temp_var()
{
	unsigned int uni = 6;
	int i = -20;
	if (uni + i > 6)
	{
		printf(">");
	}
	else
	{
		printf("<");
	}

	if (i + uni > 6)
	{
		printf(">");
	}
	else
	{
		printf("<");
	}
	printf("--------------\n");
	
	if (uni * i > 0)
	{
		printf(">0\n");
	}
	else
	{
		printf("!>0\n");
	}

	if (uni * i > 1)
	{
		printf(">1\n");
	}
	else
	{
		printf("!>1\n");
	}

	if (uni * i > -1)
	{
		printf(">-1\n");
	}
	else
	{
		printf("!>-1\n");
	}
	return 0;
}

void test_string()
{
	std::vector<unsigned char> vec_c;

	vec_c.push_back(65);
	vec_c.push_back(65);
	vec_c.push_back(0);
	vec_c.push_back(66);
	std::ostringstream sDataStream;
	std::copy(vec_c.begin(), vec_c.end(), std::ostreambuf_iterator<char>(sDataStream));
	std::string buffer = sDataStream.str();
	printf("%d\n", buffer.length());
	printf("%s\n", buffer.c_str());
}

void test_vector(std::vector <std::string> &m_ControlUUIDList, std::string controlUUID)
{
	unsigned long ControlUUIDListMaxSize = 10;
	std::vector <std::string>::const_iterator itr;
	for ( itr = m_ControlUUIDList.begin(); itr != m_ControlUUIDList.end(); itr++ )
	{
		if (*itr == controlUUID)
		{
			return;
		}
	}
	if (m_ControlUUIDList.size() >= ControlUUIDListMaxSize && ControlUUIDListMaxSize > 0)
	{
		m_ControlUUIDList.erase(m_ControlUUIDList.begin());
	}
	m_ControlUUIDList.push_back(controlUUID);
}

void test2()
{
	std::vector <std::string> m_ControlUUIDList;
	std::string controlUUID;
	for (int i = 0; i < 32; ++i)
	{
		controlUUID = controlUUID + ((i % 2) ? "" :"a");
		test_vector(m_ControlUUIDList, controlUUID);
	}
}

void throwEx()
{
	throw 2;
}

void testException()
{
	int i = 0;
	//i = 2 / i;
	throwEx();
}

void test_ostring()
{
	std::ostringstream buffer;
	buffer << (char)0;
	std::string s = buffer.str();
	std::cout << "len" << " " << s.length() << "empty" << s.empty() << "s:" << s.c_str() << std::endl;
	std::cout << "len2" << " " << strlen(s.c_str()) << std::endl;

	std::ostringstream buffer2;
	buffer2 << (char)1;
	s = buffer2.str();
	std::cout << "len" << " " << s.length() << "empty" << s.empty() << "s:" << s.c_str() << std::endl;
	std::cout << "len2" << " " << strlen(s.c_str()) << std::endl;
}

int get_the_size()
{
	printf("in get the size\n");
	return 5;
}
void test_for_size()
{
	int i = 0;
	for (i = 0; i < get_the_size(); ++i)
	{
		printf("in for\n");
	}
}

void test_get_tick()
{
	int i = 0;
	while (i < 100)
	{
		struct timeb currentSystemTime;
		ftime ( &currentSystemTime );
		printf("%u, %d\n", GetTickCount(), currentSystemTime.millitm );
		i = i + 1;
	}
}

void test_new()
{
	char* p = 0;
	p = new char[1024];
	while (p)
	{
		printf("0x%08x\n", p);
		p = new char[1024];
	}
}

int main()
{
	//test_new();
	//test_get_tick();
	//test_for_size();
	//temp_var();
	//test2();
	//AAA a;
	//a.hi();
	//a.hello();

	//testException();
	test_ostring();
	return 0;
}
