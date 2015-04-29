///////////////////////////////////////////////////////////
//  IView.cpp
//  Implementation of the Class IView
//  Created on:      02-Ê®Ò»ÔÂ-2011 14:23:51
//  Original author: luohuirong
///////////////////////////////////////////////////////////

#include "IView.h"

namespace MVC
{


	IView::IView(){

	}



	IView::~IView(){

	}





	void IView::destroy(){

	}


	std::string IView::getID(){

		return m_ID;
	}


	std::string IView::getTypeName(){

		return m_typeName;
	}


	void IView::hide(){

	}


	void IView::init(){

	}


	void IView::setID(std::string newVal){

		m_ID = newVal;
	}


	void IView::setTypeName(std::string newVal){

		m_typeName = newVal;
	}


	void IView::show(){

	}
}