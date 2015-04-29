#ifndef MI_COUNTER_H__
#define MI_COUNTER_H__
#include "AbstractIecData.h"
class MiCounter:public CAbstractData
{
public:
	explicit MiCounter(const DataStringBlock& dataTable);
	~MiCounter();
	virtual void	setValue(unsigned long addr,std::string valueString);
	virtual std::string getDataTypeName() const;
	virtual std::vector<std::string> getStringValueTalbe() const;
	virtual std::string getStringValueByAddress(unsigned long addr) const;
private:
	std::vector<SIecCounter> m_data;
};

#endif