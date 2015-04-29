///////////////////////////////////////////////////////////
//  NotifyObject.cpp
//  Implementation of the Class NotifyObject
//  Created on:      02-Ê®Ò»ÔÂ-2011 14:23:53
//  Original author: luohuirong
///////////////////////////////////////////////////////////

#include "NotifyObject.h"

namespace MVC
{

	NotifyObject::NotifyObject(){

	}



	NotifyObject::~NotifyObject(){

	}





	void* NotifyObject::getBody(){

		return m_Body;
	}


	std::string NotifyObject::getName(){

		return m_Name;
	}


	std::string NotifyObject::getType(){

		return m_Type;
	}


	void NotifyObject::setBody(void* newVal){

		m_Body = newVal;
	}


	void NotifyObject::setName(std::string newVal){

		m_Name = newVal;
	}


	void NotifyObject::setType(std::string newVal){

		m_Type = newVal;
	}
}