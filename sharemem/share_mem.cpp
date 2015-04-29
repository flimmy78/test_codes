
#include "./share_mem.h"

void write_vector(int n)
{
	std::string msg = "Message";
	char buf[20];
	itoa(n, buf, 10);
	msg.append(buf);

	std::string msg_name = msg;

	my_vector vec;
	vec.clear();
	s_point p;
	p.x = n;
	p.y = GetTickCount();
	vec.push_back(p);
	p.x = n + 1;
	p.y = GetTickCount();
	vec.push_back(p);

	void* data = shm_allocator.malloc(sizeof(s_point) * vec.size() + sizeof(size_t));
	size_t* ipp = (size_t*)data;
	*ipp = vec.size();
	s_point* pp = (s_point*)(ipp+1);
	
	for (int i = 0; i < vec.size(); ++i)
	{
		memcpy(pp + i, &vec[i], sizeof(s_point));
	}

	shm_allocator.bind(msg_name.c_str(), data);

	printf("size=%d\n", *ipp);
	printf("x=%d, y=%d\n", pp[0].x, pp[0].y);
	printf("x=%d, y=%d\n", pp[1].x, pp[1].y);

	ACE_DEBUG((LM_DEBUG,"<<%s\n", msg_name.c_str()));
}

int main (int, char *[])
{
	int nCount = 1;
	while(true)
	{
		//server ();
		write_vector(nCount);
		printf("server time:%d, ACE_OS::sleep (2);\n", nCount++);
		ACE_OS::sleep (2);
	}

	shm_allocator.remove();

	return 0;
}

namespace TA_Base_Bus
{
	OpcShareMemManager* OpcShareMemManager::m_instance = 0;

	OpcShareMemManager& OpcShareMemManager::getInstance()
	{
		if( m_instance == 0 )
		{
			m_instance = new OpcShareMemManager();
		}
		return *m_instance;
	}
}