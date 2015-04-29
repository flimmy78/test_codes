#ifndef AI_NVA_H___
#define AI_NVA_H___
#include "AbstractIecData.h"
class AiNva:public CAbstractData
{
public:
	explicit AiNva(const DataStringBlock& dataTable);
	~AiNva();
	virtual void	setValue(unsigned long addr,std::string valueString);
	virtual std::string getDataTypeName() const;
	virtual std::vector<std::string> getStringValueTalbe() const;
	virtual std::string getStringValueByAddress(unsigned long addr) const;
private:
	std::vector<SIecNvaQds> m_data;
};

#endif