#pragma once
#include "IModel.h"
#include <list>
#include "UserInfo.h"
using namespace MVC;

class IUserProxy: public IModel
{
public:
	IUserProxy(void){};
	virtual ~IUserProxy(void){};
	virtual std::list<CUserInfo*> getUsers()=0;
	virtual bool updateUser(CUserInfo* user)=0;

};