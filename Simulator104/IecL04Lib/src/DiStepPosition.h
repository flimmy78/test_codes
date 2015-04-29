#ifndef DI_STEP_POSITION_H__
#define DI_STEP_POSITION_H__

#include "AbstractIecData.h"

class DiStepPosition:public CAbstractData
{
public:
	explicit DiStepPosition(const DataStringBlock& dataTable);
	~DiStepPosition();
	virtual void	setValue(unsigned long addr,std::string valueString);
	virtual std::string getDataTypeName() const;
	virtual std::vector<std::string> getStringValueTalbe() const;
	virtual std::string getStringValueByAddress(unsigned long addr) const;
private:
	std::vector<SIecVti> m_data;
};


#endif