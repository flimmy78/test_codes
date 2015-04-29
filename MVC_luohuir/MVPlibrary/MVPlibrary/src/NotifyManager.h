///////////////////////////////////////////////////////////
//  NotifyManager.h
//  Implementation of the Class NotifyManager
//  Created on:      02-Ê®Ò»ÔÂ-2011 14:23:52
//  Original author: luohuirong
///////////////////////////////////////////////////////////

#if !defined(EA_D14B9675_E1EA_4269_A6C1_90FC9FCDE2CE__INCLUDED_)
#define EA_D14B9675_E1EA_4269_A6C1_90FC9FCDE2CE__INCLUDED_
#include <string>
#include <map>
#include "IObserver.h"
namespace MVC
{
	class NotifyManager
	{

	public:
		static NotifyManager& getInstance();
		NotifyManager();
		virtual ~NotifyManager();
		void registerObserver (IObserver* observer);
		void send(std::string type, void* body, std::string name);
		void unRegisterObserver(IObserver* observer);
	private:
		
		static NotifyManager* m_instance;
		 
		typedef  std::map<void*, IObserver*> ObserverMap;	 

		ObserverMap m_ObserverMap;

	};

}
#endif // !defined(EA_D14B9675_E1EA_4269_A6C1_90FC9FCDE2CE__INCLUDED_)
