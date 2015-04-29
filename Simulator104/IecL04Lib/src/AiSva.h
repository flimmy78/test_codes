#ifndef AI_SVA_H___
#define AI_SVA_H___
#include "AbstractIecData.h"
class AiSva:public CAbstractData
{
public:
	explicit AiSva(const DataStringBlock& dataTable);
	~AiSva();
	virtual void	setValue(unsigned long addr,std::string valueString);
	virtual std::string getDataTypeName() const;
	virtual std::vector<std::string> getStringValueTalbe() const;
	virtual std::string getStringValueByAddress(unsigned long addr) const;
private:
	std::vector<SIecSvaQds> m_data;
};

#endif