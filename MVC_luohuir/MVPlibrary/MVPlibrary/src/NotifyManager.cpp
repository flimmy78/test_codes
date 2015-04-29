///////////////////////////////////////////////////////////
//  NotifyManager.cpp
//  Implementation of the Class NotifyManager
//  Created on:      02-Ê®Ò»ÔÂ-2011 14:23:52
//  Original author: luohuirong
///////////////////////////////////////////////////////////

#include "NotifyManager.h"
namespace MVC
{

	NotifyManager* NotifyManager::m_instance = 0;

	NotifyManager& NotifyManager::getInstance()
	{
		if (m_instance==NULL)
		{
			m_instance=new NotifyManager();
		}
		return *m_instance;
	}

	NotifyManager::NotifyManager(){

	}



	NotifyManager::~NotifyManager(){

	}

	void NotifyManager::registerObserver(IObserver* observer)
	{	 
		void* p=observer;
		ObserverMap::iterator result = m_ObserverMap.find(p);
		if ( result == m_ObserverMap.end() )
		{
			m_ObserverMap[p]=observer;
		}		 
	}


	void NotifyManager::send(std::string type, void* body, std::string name){
		  NotifyObject obj;
		  obj.setBody(body);
		  obj.setName(name);
		  obj.setType(type);
		  ObserverMap::iterator iter = m_ObserverMap.begin();
		  for (; iter!=m_ObserverMap.end();iter++)
		  {
				 IObserver* observer=iter->second; 
				 observer->NotifyObserver(obj);
		  }


	}


	void NotifyManager::unRegisterObserver(IObserver* observer){
		void* p=observer;
		ObserverMap::iterator result = m_ObserverMap.find(p);
		if ( result != m_ObserverMap.end() )
		{
			 m_ObserverMap.erase(result);
		}	
	}
}