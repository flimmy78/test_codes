///////////////////////////////////////////////////////////
//  ViewManager.cpp
//  Implementation of the Class ViewManager
//  Created on:      02-Ê®Ò»ÔÂ-2011 14:23:51
//  Original author: luohuirong
///////////////////////////////////////////////////////////

#include "ViewManager.h"

namespace MVC
{


	ViewManager* ViewManager::m_instance = 0;

	ViewManager& ViewManager::getInstance()
	{
		if (m_instance==NULL)
		{
			m_instance=new ViewManager();
		}
		return *m_instance;
	}

	ViewManager::ViewManager(){

	}



	ViewManager::~ViewManager(){

	}

	
 
	IView* ViewManager::createView(std::string& type,std::string& id)
	{
		ViewFactoryMap::iterator iter = m_ViewFactoryMap.begin();
		for (; iter!=m_ViewFactoryMap.end();iter++)
		{
			 IView* v= (iter->second)->createView(id, type);
			 if (v!=NULL)
			 {
				 return v;
			 }
		}
		return NULL;

	}

	IView* ViewManager::getView(std::string type, std::string id){

		std::string realID=type + id;	
		ViewMap::iterator result = m_ViewMap.find(realID);
		if ( result == m_ViewMap.end() )
		{
			return createView(type,id);
		}		 
		return result->second;
	 

	}


	void ViewManager::registerView(IView* view){

		std::string realID=view->getViewTypeName() + view->getViewID();	
		ViewMap::iterator result = m_ViewMap.find(realID);
		if ( result == m_ViewMap.end() )
		{
			m_ViewMap[realID]=view;
		}	
	}

	void ViewManager::unRegisterView(IView* view){

		std::string realID=view->getViewTypeName() + view->getViewID();	
		ViewMap::iterator result = m_ViewMap.find(realID);
		if ( result != m_ViewMap.end() )
		{
			m_ViewMap.erase(result);
		}		 
	}


	void ViewManager::registerViewFactory(IViewFactory* viewFactory)
	{
        void* p=viewFactory;
	 
		ViewFactoryMap::iterator result = m_ViewFactoryMap.find(p);
		if ( result == m_ViewFactoryMap.end() )
		{
			 m_ViewFactoryMap[p]=viewFactory;
		}				 

	}
}