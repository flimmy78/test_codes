#include "IView.h"
#include "UserInfo.h"
#include <list>
using namespace MVC;

class IUserInfoView: public IView
{
public:
	IUserInfoView(void){}; 
	virtual ~IUserInfoView(void){};
	virtual void displayUser(CUserInfo* user)=0;
};
