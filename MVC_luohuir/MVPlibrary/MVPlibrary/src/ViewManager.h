///////////////////////////////////////////////////////////
//  ViewManager.h
//  Implementation of the Class ViewManager
//  Created on:      02-Ê®Ò»ÔÂ-2011 14:23:51
//  Original author: luohuirong
///////////////////////////////////////////////////////////

#if !defined(EA_82C7CC38_DEDB_4317_B680_3968BED445BB__INCLUDED_)
#define EA_82C7CC38_DEDB_4317_B680_3968BED445BB__INCLUDED_
#include <string>
#include <map> 
#include "IView.h"
#include "IViewFactory.h"
namespace MVC
{
	class ViewManager
	{

	public:
		static ViewManager& getInstance();
		virtual ~ViewManager();

		IView* getView(std::string type, std::string id="");
		void registerView(IView* view);
		void unRegisterView(IView* view);
		void registerViewFactory(IViewFactory* viewFactory);
	private:
		
		ViewManager();
		typedef  std::map<std::string, IView*>  ViewMap;
		typedef  std::map<void*, IViewFactory*> ViewFactoryMap;

	    IView* createView(std::string& type, std::string& id);

		ViewFactoryMap m_ViewFactoryMap;
		ViewMap m_ViewMap;

		static ViewManager* m_instance;

	};

}
#endif // !defined(EA_82C7CC38_DEDB_4317_B680_3968BED445BB__INCLUDED_)
