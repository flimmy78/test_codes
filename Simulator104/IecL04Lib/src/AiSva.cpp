
#include <sstream>
#include "AiSva.h"
#include "ParaDef.h"
#include "RunParams.h"

AiSva::AiSva(const DataStringBlock& dataTable)
:CAbstractData(dataTable),
m_data(dataTable.size())
{
	unsigned long	addr=0;
	std::string		valueString;
	for(int i=0; i < dataTable.size(); ++i)
	{
		addr = dataTable[i].first;
		valueString = dataTable[i].second;
		this->setValue(addr, valueString);
	}
}

AiSva::~AiSva()
{
	m_data.clear();
}

void	AiSva::setValue(unsigned long addr,std::string valueString)
{
	unsigned long index = addr - m_startAddr;
	RunParams valueConfig(valueString);
	if(valueConfig.isSet(PARA_VALUE_SVA))
	{
		m_data[index].SVA = valueConfig.getInteger(PARA_VALUE_SVA);
	}
	if(valueConfig.isSet(PARA_VALUE_QDS))
	{
		m_data[index].QDS = valueConfig.getUInt8(PARA_VALUE_QDS);
	}
	else
	{
		if(valueConfig.isSet(PARA_VALUE_OV))
		{
			m_data[index].QDS.OV = valueConfig.getInteger(PARA_VALUE_OV);
		}
		if(valueConfig.isSet(PARA_VALUE_BL))
		{
			m_data[index].QDS.BL = valueConfig.getInteger(PARA_VALUE_BL);
		}
		if(valueConfig.isSet(PARA_VALUE_SB))
		{
			m_data[index].QDS.SB = valueConfig.getInteger(PARA_VALUE_SB);
		}
		if(valueConfig.isSet(PARA_VALUE_NT))
		{
			m_data[index].QDS.NT = valueConfig.getInteger(PARA_VALUE_NT);
		}
		if(valueConfig.isSet(PARA_VALUE_IV))
		{
			m_data[index].QDS.IV = valueConfig.getInteger(PARA_VALUE_IV);
		}
	}
}

std::string AiSva::getDataTypeName() const
{
	return "AiSva";
}

std::vector<std::string> AiSva::getStringValueTalbe() const
{
	std::vector<std::string> valueTable(m_data.size());
	for(int index=0; index< m_data.size(); ++index)
	{
		std:: ostringstream valueStream;

		valueStream<<PARA_PKEY<<"="<<m_startAddr + index<<",";
		valueStream<<PARA_ADDR<<"="<<m_startAddr + index<<",";
		valueStream<<PARA_TYPE<<"="<<TYPE_AI_SVA<<",";
		valueStream<<PARA_VALUE_SVA<<"="<<m_data[index].SVA<<",";
		valueStream<<PARA_VALUE_OV<<"="<<static_cast<int>(m_data[index].QDS.OV)<<",";
		valueStream<<PARA_VALUE_BL<<"="<<static_cast<int>(m_data[index].QDS.BL)<<",";
		valueStream<<PARA_VALUE_SB<<"="<<static_cast<int>(m_data[index].QDS.SB)<<",";
		valueStream<<PARA_VALUE_NT<<"="<<static_cast<int>(m_data[index].QDS.NT)<<",";
		valueStream<<PARA_VALUE_IV<<"="<<static_cast<int>(m_data[index].QDS.IV);
		
		valueTable[index] = valueStream.str();
	}
	return valueTable;
}

std::string AiSva::getStringValueByAddress(unsigned long addr) const
{
	assert(addr>=m_startAddr && addr <= m_endAddr);
	int index = addr - m_startAddr;
	std:: ostringstream valueStream;

	valueStream<<PARA_PKEY<<"="<<addr<<",";
	valueStream<<PARA_ADDR<<"="<<addr<<",";
	valueStream<<PARA_TYPE<<"="<<TYPE_AI_SVA<<",";
	valueStream<<PARA_VALUE_SVA<<"="<<m_data[index].SVA<<",";
	valueStream<<PARA_VALUE_OV<<"="<<static_cast<int>(m_data[index].QDS.OV)<<",";
	valueStream<<PARA_VALUE_BL<<"="<<static_cast<int>(m_data[index].QDS.BL)<<",";
	valueStream<<PARA_VALUE_SB<<"="<<static_cast<int>(m_data[index].QDS.SB)<<",";
	valueStream<<PARA_VALUE_NT<<"="<<static_cast<int>(m_data[index].QDS.NT)<<",";
	valueStream<<PARA_VALUE_IV<<"="<<static_cast<int>(m_data[index].QDS.IV);

	return valueStream.str();
}
