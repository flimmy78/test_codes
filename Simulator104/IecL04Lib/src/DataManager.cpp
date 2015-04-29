#include <iostream>
#include <fstream>
#include "ParaDef.h"
#include "DataManager.h"	
#include "DiSinglePoint.h"
#include "DiDoublePoint.h"
#include "DiStepPosition.h"
#include "AiNva.h"
#include "AiSfa.h"
#include "AiSva.h"
#include "MiCounter.h"

std::string	DataManager::s_DiSinglePoint	= "SinglePoint";
std::string	DataManager::s_DiDoublePoint	= "DoublePoint";
std::string	DataManager::s_DiStepPosition	= "StepPosition";
std::string	DataManager::s_AiNva			= "AiNva";
std::string	DataManager::s_AiSva			= "AiSva";
std::string	DataManager::s_AiSfa			= "AiSfa";
std::string	DataManager::s_MiCounter		= "MiCounter";


DataManager::DataManager(const RunParams& runParam)
:m_isInit(false)
{
	this->initilize(runParam);
}

void DataManager::initilize(const RunParams& runParam)
{
	if(runParam.isSet(s_DiSinglePoint))
	{
		std::string dataFileName = runParam.getString(s_DiSinglePoint);
		DataStringBlock dataStringBlock = parseDataFromFile(dataFileName);
		if(dataStringBlock.size() > 0)
		{
			m_dataMap[s_DiSinglePoint] = new DiSinglePoint(dataStringBlock);
		}
	}

	if(runParam.isSet(s_DiDoublePoint))
	{
		std::string dataFileName = runParam.getString(s_DiDoublePoint);
		DataStringBlock dataStringBlock = parseDataFromFile(dataFileName);
		if(dataStringBlock.size() > 0)
		{
			m_dataMap[s_DiDoublePoint] = new DiDoublePoint(dataStringBlock);
		}
	}

	if(runParam.isSet(s_DiStepPosition))
	{
		std::string dataFileName = runParam.getString(s_DiStepPosition);
		DataStringBlock dataStringBlock = parseDataFromFile(dataFileName);
		if(dataStringBlock.size() > 0)
		{
			m_dataMap[s_DiStepPosition] = new DiStepPosition(dataStringBlock);
		}
	}

	if(runParam.isSet(s_AiNva))
	{
		std::string dataFileName = runParam.getString(s_AiNva);
		DataStringBlock dataStringBlock = parseDataFromFile(dataFileName);
		if(dataStringBlock.size() > 0)
		{
			m_dataMap[s_AiNva] = new AiNva(dataStringBlock);
		}
	}

	if(runParam.isSet(s_AiSva))
	{
		std::string dataFileName = runParam.getString(s_AiSva);
		DataStringBlock dataStringBlock = parseDataFromFile(dataFileName);
		if(dataStringBlock.size() > 0)
		{
			m_dataMap[s_AiSva] = new AiSva(dataStringBlock);
		}
	}

	if(runParam.isSet(s_AiSfa))
	{
		std::string dataFileName = runParam.getString(s_AiSfa);
		DataStringBlock dataStringBlock = parseDataFromFile(dataFileName);
		if(dataStringBlock.size() > 0)
		{
			m_dataMap[s_AiSfa] = new AiSfa(dataStringBlock);
		}
	}

	if(runParam.isSet(s_MiCounter))
	{
		std::string dataFileName = runParam.getString(s_MiCounter);
		DataStringBlock dataStringBlock = parseDataFromFile(dataFileName);
		if(dataStringBlock.size() > 0)
		{
			m_dataMap[s_MiCounter] = new MiCounter(dataStringBlock);
		}
	}
	m_isInit = true;
}

void DataManager::modify(unsigned long addr, std::string valueString)
{
	DataMap::iterator itr = m_dataMap.begin();
	for(; itr!=m_dataMap.end(); ++itr)
	{
		if(itr->second->isAddrInRange(addr))
		{
			itr->second->setValue(addr,valueString);
			break;
		}
	}
}


DataStringBlock DataManager::parseDataFromFile(const std::string dataFileName)
{
	std::ifstream dataFile(dataFileName.c_str());  
	std::string tmpString;  
	DataStringBlock rtnTable;
	std::pair<unsigned long, std::string> tableItem;
	while( std::getline(dataFile, tmpString ))
    {    
		if(tmpString.size() > 0)
		{
			RunParams runParam(tmpString);
			tableItem.first = runParam.getUInt32(PARA_ADDR);
			tableItem.second = tmpString;
			rtnTable.push_back(tableItem);
		}
    }
	return rtnTable;
}


std::string	DataManager::getDisplayString(unsigned long resourceKey) const
{
	std::string rtnString;
	DataMap::const_iterator itr = m_dataMap.begin();
	for(; itr!=m_dataMap.end(); ++itr)
	{
		if(itr->second->isAddrInRange(resourceKey))
		{
			rtnString =itr->second->getStringValueByAddress(resourceKey);
		}
	}
	return rtnString;
}


std::vector<std::string> DataManager::getAllDisplayString() const
{
	std::vector<std::string> rtnTable;
	DataMap::const_iterator itr = m_dataMap.begin();
	for(; itr!=m_dataMap.end(); ++itr)
	{
		std::vector<std::string> tmpTable = itr->second->getStringValueTalbe();
		rtnTable.insert(rtnTable.end(), tmpTable.begin(), tmpTable.end());
	}
	return rtnTable;
}