
#include <stdio.h>
#include <iostream>
#include <vector>
#include "ace/Hash_Map_With_Allocator_T.h"
#include "ace/Shared_Memory_MM.h"
#include "ace/Malloc.h"
#include "ace/Malloc_T.h"
#include "ace/Memory_Pool.h"

#define DATA_SIZE 100
#define MESSAGE1 "Hiya over there client process"
#define MESSAGE2 "Did you hear me the first time?"

LPCTSTR poolname="My_Pool";
LPCTSTR poolnamehash="My_Pool_Hash";

typedef ACE_Malloc<ACE_MMAP_MEMORY_POOL, ACE_Null_Mutex> Malloc_Allocator0;

typedef ACE_Allocator_Adapter< Malloc_Allocator0 > Malloc_Allocator;
typedef struct {int x; int y;} s_point;
typedef std::vector<s_point>	my_vector;

typedef ACE_Allocator_Adapter<ACE_Malloc_T <ACE_MMAP_MEMORY_POOL,
ACE_Null_Mutex,
ACE_Control_Block>
> ALLOCATOR;


typedef ACE_Hash_Map_With_Allocator<int, s_point> MAP;


// odbc32.lib odbccp32.lib acemfcd.lib omniORB414_rtd.lib omniDynamic414_rtd.lib omnithread34_rtd.lib
// COS414_rtd.lib Rpcrt4.lib oci.lib TA_Base_Core_d.lib stracelib.lib

Malloc_Allocator shm_allocator(poolname);
ALLOCATOR hash_allocator(poolnamehash);

static void server (void)
{
	//Create the memory allocator passing it the shared memory
	//pool that you want to use
	//Malloc_Allocator shm_allocator(poolname);
	
	//Create a message, allocate memory for it and bind it with
	//a name so that the client can the find it in the memory
	//pool
	char* Message1=(char*)shm_allocator.malloc(strlen(MESSAGE1));
	ACE_OS::strcpy(Message1,MESSAGE1);
	shm_allocator.bind("FirstMessage",Message1);
	ACE_DEBUG((LM_DEBUG,"<<%s\n",Message1));
	
	//How about a second message
	char* Message2=(char*)shm_allocator.malloc(strlen(MESSAGE2));
	ACE_OS::strcpy(Message2,MESSAGE2);
	shm_allocator.bind("SecondMessage",Message2);
	ACE_DEBUG((LM_DEBUG,"<<%s\n",Message2));
	
	//Set the Server to go to sleep for a while so that the client has
	//a chance to do its stuff
	ACE_DEBUG((LM_DEBUG,
		"Server done writing.. going to sleep zzz..\n\n\n"));
	//ACE_OS::sleep(2);
	
	//Get rid of all resources allocated by the server. In other
	//words get rid of the shared memory pool that had been
	//previously allocated
	//shm_allocator.remove();
}

static void client(void)
{
	//Create a memory allocator. Be sure that the client passes
	// in the "right" name here so that both the client and the
	//server use the same memory pool. We wouldn¡¯t want them to
	
	// BOTH create different underlying pools.
	//Malloc_Allocator shm_allocator(poolname);
	
	//Get that first message. Notice that the find is looking up the
	//memory based on the "name" that was bound to it by the server.
	void *Message1;
	if(shm_allocator.find("FirstMessage",Message1)==-1)
	{
		ACE_ERROR((LM_ERROR,
			"Client: Problem cant find data that server has sent\n"));
		ACE_OS::exit(1);
	}
	
	ACE_OS::printf(">>%s\n",(char*) Message1);
	ACE_OS::fflush(stdout);
	
	//Lets get that second message now.
	void *Message2;
	if(shm_allocator.find("SecondMessage",Message2)==-1)
	{
		ACE_ERROR((LM_ERROR,
			"Client: Problem cant find data that server has sent\n"));
		ACE_OS::exit(1);
	}
	
	ACE_OS::printf(">>%s\n",(char*)Message2);
	ACE_OS::fflush(stdout);
	ACE_DEBUG((LM_DEBUG,"Client done reading! BYE NOW\n"));
	ACE_OS::fflush(stdout);
}

void write_n(int n)
{
	std::string msg = "Message";
	char buf[20];
	itoa(n, buf, 10);
	msg.append(buf);
	std::string msg_name = msg;
	msg.append(" value");

	char* Message1=(char*)shm_allocator.malloc(strlen(msg.c_str()));
	ACE_OS::strcpy(Message1, msg.c_str());

	shm_allocator.bind(msg_name.c_str(), Message1);
	ACE_DEBUG((LM_DEBUG,"<<%s\n", Message1));
}

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

void write_hash(int n)
{
	std::string msg = "Message";
	char buf[20];
	itoa(n, buf, 10);
	msg.append(buf);
	std::string msg_name = msg;
	

	size_t hash_table_size = sizeof (MAP);
	void *hash_map = hash_allocator.malloc (hash_table_size);

	MAP *map = new (hash_map) MAP (hash_table_size, &hash_allocator);
	hash_allocator.bind (msg_name.c_str(), hash_map);

	s_point newRecord;
	newRecord.x = n;
	newRecord.y = n+1;
	map->bind (n, newRecord, &hash_allocator);

	newRecord.x = n+2;
	newRecord.y = n+3;
	map->bind (n+1, newRecord, &hash_allocator);

	printf("size=%d\n", map->current_size());

	for (MAP::iterator iter = map->begin ();
		iter != map->end ();
		iter++)
    {
		int key = (*iter).ext_id_;

		s_point record;
		int result = map->find (key, record, &hash_allocator);
		if (result != -1)
		{
			printf("key=%d, x=%d, y=%d\n", key, record.x, record.y);
		}
    }

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
