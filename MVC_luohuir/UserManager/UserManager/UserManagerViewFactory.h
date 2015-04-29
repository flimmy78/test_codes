#pragma once

#include "IViewFactory.h"

using namespace MVC;

class UserManagerViewFactory: public IViewFactory
{
public:
	UserManagerViewFactory(void);

	virtual ~UserManagerViewFactory(void);


	virtual  IView*  createView(std::string id, std::string type);
};
