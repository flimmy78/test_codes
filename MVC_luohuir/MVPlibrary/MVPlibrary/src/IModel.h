///////////////////////////////////////////////////////////
//  IModel.h
//  Implementation of the Class IModel
//  Created on:      02-Ê®Ò»ÔÂ-2011 14:23:52
//  Original author: luohuirong
///////////////////////////////////////////////////////////

#if !defined(EA_EEA39056_AA27_4b20_8646_D3E56D656A5E__INCLUDED_)
#define EA_EEA39056_AA27_4b20_8646_D3E56D656A5E__INCLUDED_
#include <string>
namespace MVC
{
	class IModel
	{

	public:
		IModel(){};
		virtual ~IModel(){};
		virtual std::string TypeName() =0;

	};

}
#endif // !defined(EA_EEA39056_AA27_4b20_8646_D3E56D656A5E__INCLUDED_)
