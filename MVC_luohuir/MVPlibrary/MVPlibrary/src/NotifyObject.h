///////////////////////////////////////////////////////////
//  NotifyObject.h
//  Implementation of the Class NotifyObject
//  Created on:      02-Ê®Ò»ÔÂ-2011 14:23:53
//  Original author: luohuirong
///////////////////////////////////////////////////////////

#if !defined(EA_0051AA28_29DE_4dfb_B4A8_3ED06790410B__INCLUDED_)
#define EA_0051AA28_29DE_4dfb_B4A8_3ED06790410B__INCLUDED_
#include <string>
namespace MVC
{
	class NotifyObject
	{

	public:
		NotifyObject();
		virtual ~NotifyObject();
	

		void* getBody();
		std::string getName();
		std::string getType();
		void setBody(void* newVal);
		void setName(std::string newVal);
		void setType(std::string newVal);
	private:
		void* m_Body;
		std::string m_Name;
		std::string m_Type;

	};

}
#endif // !defined(EA_0051AA28_29DE_4dfb_B4A8_3ED06790410B__INCLUDED_)
