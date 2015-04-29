
#include <stdio.h>
#include <iostream>
#include <vector>
#include "ace/Hash_Map_With_Allocator_T.h"
#include "ace/Shared_Memory_MM.h"
#include "ace/Malloc.h"
#include "ace/Malloc_T.h"
#include "ace/Memory_Pool.h"
#include "core/synchronisation/src/ReEntrantThreadLockable.h"

LPCTSTR poolname="My_Pool";
LPCTSTR poolnamehash="My_Pool_Hash";

typedef ACE_Allocator_Adapter< ACE_Malloc<ACE_MMAP_MEMORY_POOL, ACE_Null_Mutex> > Malloc_Allocator;
typedef struct {int x; int y;} s_point;
typedef std::vector<s_point>	my_vector;

Malloc_Allocator shm_allocator(poolname);

namespace TA_Base_Bus
{
	class OpcShareMemManager
	{
	public:
		virtual ~OpcShareMemManager() {};
		static OpcShareMemManager& getInstance();

	private:
		static OpcShareMemManager* m_instance;

		OpcShareMemManager() : m_sa(NULL) {m_sa = new TA_Base_Bus::TA_SharedAlarm;};
		
		
		OpcShareMemManager( const OpcShareMemManager& OpcShareMemManager);
		OpcShareMemManager& operator=(const OpcShareMemManager &);
		
		static OpcShareMemManager* m_instance;
		TA_Base_Bus::TA_SharedAlarm* m_sa;
		
        TA_Base_Core::ReEntrantThreadLockable m_lock;
	};
}