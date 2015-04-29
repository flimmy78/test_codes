#ifndef __DATA_MANAGER_H__
#define __DATA_MANAGER_H__

#include <map>
#include <vector>
#include <string>
#include "AbstractIecData.h"
#include "RunParams.h"
using namespace std;

class DataManager
{
public:
	
	typedef std::map<std::string, CAbstractData*>				   DataMap;
	explicit DataManager(const RunParams& runParam);
	DataStringBlock parseDataFromFile(const std::string dataFileName);
	void initilize(const RunParams& runParam);
	void modify(unsigned long addr, std::string valueString);

	std::string	getDisplayString(unsigned long resourceKey) const;
	std::vector<std::string> getAllDisplayString() const;
private:
	bool	m_isInit;
	DataMap m_dataMap;
	static std::string	s_DiSinglePoint;
	static std::string	s_DiDoublePoint;
	static std::string	s_DiStepPosition;
	static std::string	s_AiNva;
	static std::string	s_AiSva;
	static std::string	s_AiSfa;
	static std::string	s_MiCounter;
};

#endif