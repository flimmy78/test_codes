///////////////////////////////////////////////////////////
//  IObserver.h
//  Implementation of the Class IObserver
//  Created on:      02-Ê®Ò»ÔÂ-2011 14:23:53
//  Original author: luohuirong
///////////////////////////////////////////////////////////

#if !defined(EA_015709AC_B7BF_4c90_8700_7B74CF7107FD__INCLUDED_)
#define EA_015709AC_B7BF_4c90_8700_7B74CF7107FD__INCLUDED_
#include <string>
#include "NotifyObject.h"

namespace MVC
{
	class IObserver
	{

	public:
		IObserver(){};
		virtual ~IObserver(){};

		virtual void NotifyObserver(NotifyObject& notifyObj) =0 ;

	};

}
#endif // !defined(EA_015709AC_B7BF_4c90_8700_7B74CF7107FD__INCLUDED_)
