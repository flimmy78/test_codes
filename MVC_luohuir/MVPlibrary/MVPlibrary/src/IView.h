///////////////////////////////////////////////////////////
//  IView.h
//  Implementation of the Class IView
//  Created on:      02-Ê®Ò»ÔÂ-2011 14:23:51
//  Original author: luohuirong
///////////////////////////////////////////////////////////

#if !defined(EA_B62C41A6_7236_4a3e_AD2A_4F2C39FF8A74__INCLUDED_)
#define EA_B62C41A6_7236_4a3e_AD2A_4F2C39FF8A74__INCLUDED_
#include <string>
 
namespace MVC
{
	class IPresenter;
	class IView
	{

	public:
		IView(){};
		virtual ~IView(){};

		virtual void destroyView() =0;
		virtual std::string getViewID() =0;
		virtual std::string getViewTypeName() =0;
		virtual void hideView() =0;
		virtual void initView() =0;
		virtual void setViewID(std::string newVal) =0;
		virtual void setViewTypeName(std::string newVal) =0;
		virtual void showView() =0;
		virtual void attachPresenter(IPresenter* presenter)=0;
		virtual void putObject(void* obj,std::string objectName="")=0;
// 
// 	private:
// 		std::string m_ID;
// 		std::string m_typeName;

	};

}
#endif // !defined(EA_B62C41A6_7236_4a3e_AD2A_4F2C39FF8A74__INCLUDED_)
