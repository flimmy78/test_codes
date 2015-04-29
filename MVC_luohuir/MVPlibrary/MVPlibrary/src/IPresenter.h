///////////////////////////////////////////////////////////
//  IPresenter.h
//  Implementation of the Class IPresenter
//  Created on:      02-Ê®Ò»ÔÂ-2011 14:23:51
//  Original author: luohuirong
///////////////////////////////////////////////////////////

#if !defined(EA_5CB2DB5C_41CA_4eb3_95F3_4CFB040CF79B__INCLUDED_)
#define EA_5CB2DB5C_41CA_4eb3_95F3_4CFB040CF79B__INCLUDED_
#include <string>
#include "IView.h"
#include "IModel.h"
#include "IObserver.h"

namespace MVC
{
	class IPresenter : public IObserver
	{

	public:
		IPresenter(){};
		virtual ~IPresenter(){};
		virtual void attach(IModel* model, IView* view) =0;

	};

}
#endif // !defined(EA_5CB2DB5C_41CA_4eb3_95F3_4CFB040CF79B__INCLUDED_)
