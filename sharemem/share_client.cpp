
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
	Malloc_Allocator shm_allocator(poolname);
	
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
	ACE_OS::sleep(20);
	
	//Get rid of all resources allocated by the server. In other
	//words get rid of the shared memory pool that had been
	//previously allocated
	shm_allocator.remove();
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
		return;
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
		return;
		ACE_OS::exit(1);
	}
	
	ACE_OS::printf(">>%s\n",(char*)Message2);
	ACE_OS::fflush(stdout);
	ACE_DEBUG((LM_DEBUG,"Client done reading! BYE NOW\n"));
	ACE_OS::fflush(stdout);
}

int read_n(int n)
{
	std::string msg = "Message";
	char buf[20];
	itoa(n, buf, 10);
	msg.append(buf);

	void *Message1;
	ACE_OS::printf("to get: %s\n",(char*) msg.c_str());

	if(shm_allocator.find(msg.c_str(), Message1)==-1)
	{
		ACE_ERROR((LM_ERROR,
			"Client: Problem cant find data that server has sent\n"));
		return 0;
	}
	
	ACE_OS::printf(">>%s\n",(char*) Message1);
	ACE_OS::fflush(stdout);
	return 1;
}


int read_vector(int n)
{
	std::string msg = "Message";
	char buf[20];
	itoa(n, buf, 10);
	msg.append(buf);
	std::string msg_name = msg;
	
	void* data = NULL;
	if(shm_allocator.find(msg.c_str(), data)==-1)
	{
		ACE_ERROR((LM_ERROR,
			"Client: Problem cant find data that server has sent\n"));
		return 0;
	}

	size_t* ipp = (size_t*)data;
	s_point* pp = (s_point*)(ipp+1);

	
	printf("size=%d\n", *ipp);
	printf("x=%d, y=%d\n", pp[0].x, pp[0].y);
	printf("x=%d, y=%d\n", pp[1].x, pp[1].y);
	
	ACE_DEBUG((LM_DEBUG,"<<%s\n", msg_name.c_str()));
	return 1;
}

int read_hash(int n)
{
	std::string msg = "Message";
	char buf[20];
	itoa(n, buf, 10);
	msg.append(buf);
	std::string msg_name = msg;
	
	void* data = NULL;
	if(hash_allocator.find(msg.c_str(), data)==-1)
	{
		ACE_ERROR((LM_ERROR,
			"Client: Problem cant find data that server has sent\n"));
		return 0;
	}
	
	MAP *map = (MAP*)data;
	
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
	return 1;
}

int main (int, char *[])
{
	int nCount = 1;
	while(true)
	{
		//client ();
		if (read_vector(nCount))
		{
			++nCount;
		}
		else
		{
			ACE_OS::sleep (1);
		}
	}
	
	return 0;
}
