#pragma once

#include "IView.h"
#include "UserInfo.h"
#include <list>
using namespace MVC;

class IUserManagerView: public IView
{
public:
	IUserManagerView(void){}; 
	virtual ~IUserManagerView(void){};

	virtual void displayUsers(std::list<CUserInfo*> userlist)=0;

	virtual void refreshUser(CUserInfo* user)=0;
    


};
