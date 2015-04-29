#include <sstream>
#include "DiDoublePoint.h"
#include "ParaDef.h"
#include "RunParams.h"



DiDoublePoint::DiDoublePoint(const DataStringBlock& dataTable)
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
DiDoublePoint::~DiDoublePoint()
{
	m_data.clear();
}
void DiDoublePoint::setValue(unsigned long addr,std::string valueString)
{
	unsigned long index = addr - m_startAddr;
	RunParams valueConfig(valueString);
	if(valueConfig.isSet(PARA_VALUE_DPI))
	{
		m_data[index].DPI = valueConfig.getInteger(PARA_VALUE_DPI);
	}
	if(valueConfig.isSet(PARA_VALUE_BL))
	{
		m_data[index].BL = valueConfig.getInteger(PARA_VALUE_BL);
	}
	if(valueConfig.isSet(PARA_VALUE_SB))
	{
		m_data[index].SB = valueConfig.getInteger(PARA_VALUE_SB);
	}
	if(valueConfig.isSet(PARA_VALUE_NT))
	{
		m_data[index].NT = valueConfig.getInteger(PARA_VALUE_NT);
	}
	if(valueConfig.isSet(PARA_VALUE_IV))
	{
		m_data[index].IV = valueConfig.getInteger(PARA_VALUE_IV);
	}
}
std::string DiDoublePoint::getDataTypeName() const
{
	return "DiDoubleDataPoint";
}
std::vector<std::string> DiDoublePoint::getStringValueTalbe() const
{
	std::vector<std::string> valueTable(m_data.size());
	for(int index=0; index< m_data.size(); ++index)
	{
		std:: ostringstream valueStream;

		valueStream<<PARA_PKEY<<"="<<m_startAddr + index<<",";
		valueStream<<PARA_ADDR<<"="<<m_startAddr + index<<",";
		valueStream<<PARA_TYPE<<"="<<TYPE_DOUBLE_POINT<<",";
		valueStream<<PARA_VALUE_DPI<<"="<< static_cast<int>( m_data[index].DPI) <<",";
		valueStream<<PARA_VALUE_BL<<"="<< static_cast<int> ( m_data[index].BL ) <<",";
		valueStream<<PARA_VALUE_SB<<"="<< static_cast<int> ( m_data[index].SB ) <<",";
		valueStream<<PARA_VALUE_NT<<"="<< static_cast<int> ( m_data[index].NT ) <<",";
		valueStream<<PARA_VALUE_IV<<"="<< static_cast<int> ( m_data[index].IV );
		
		valueTable[index] = valueStream.str();
	}
	return valueTable;
}

std::string DiDoublePoint::getStringValueByAddress(unsigned long addr) const
{
	assert(addr >= m_startAddr && addr <= m_endAddr);
	int index = addr - m_startAddr;
	std:: ostringstream valueStream;

	valueStream<<PARA_PKEY<<"="<<addr<<",";
	valueStream<<PARA_ADDR<<"="<<addr<<",";
	valueStream<<PARA_TYPE<<"="<<TYPE_DOUBLE_POINT<<",";
	valueStream<<PARA_VALUE_DPI<<"="<< static_cast<int>( m_data[index].DPI) <<",";
	valueStream<<PARA_VALUE_BL<<"="<< static_cast<int> ( m_data[index].BL ) <<",";
	valueStream<<PARA_VALUE_SB<<"="<< static_cast<int> ( m_data[index].SB ) <<",";
	valueStream<<PARA_VALUE_NT<<"="<< static_cast<int> ( m_data[index].NT ) <<",";
	valueStream<<PARA_VALUE_IV<<"="<< static_cast<int> ( m_data[index].IV );
	
	return valueStream.str();

}