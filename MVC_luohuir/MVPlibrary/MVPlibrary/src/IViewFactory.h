///////////////////////////////////////////////////////////
//  IViewFactory.h
//  Implementation of the Class IViewFactory
//  Created on:      02-Ê®Ò»ÔÂ-2011 14:23:53
//  Original author: luohuirong
///////////////////////////////////////////////////////////

#if !defined(EA_97C02C20_24F3_43c7_BFBF_96C6E48D6CCF__INCLUDED_)
#define EA_97C02C20_24F3_43c7_BFBF_96C6E48D6CCF__INCLUDED_
#include <string>
#include "IView.h"
namespace MVC
{
	class IViewFactory
	{

	public:
		IViewFactory(){};
		virtual ~IViewFactory(){};

		virtual  IView*  createView(std::string id, std::string type) =0 ;
 
	};

}
#endif // !defined(EA_97C02C20_24F3_43c7_BFBF_96C6E48D6CCF__INCLUDED_)
