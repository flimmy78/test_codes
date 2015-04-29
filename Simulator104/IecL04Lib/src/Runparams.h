#ifndef RUN_PARAMS_H__
#define RUN_PARAMS_H__

#include <string>
#include <map>
#include <vector>
#include "Btype.h"
using namespace std;

class RunParams
{
public:
	explicit RunParams(const std::string& paraString);
	virtual ~RunParams();

	std::string getString(const std::string& parameter) const;
	UInt32		getUInt32(const std::string& parameter) const;
	UInt8		getUInt8(const std::string& parameter) const;
	int			getInteger(const std::string& parameter) const;
	float		getFloat(const std::string& parameter)const;
	bool		isSet(const std::string& parameter) const;

	void		set(const std::string& paramter, const std::string& valueString);
	void		parseParams(const std::string& paraString);
private:
	void		split(const  string  & theString,const  string  & theDelimiter);
private:
	std::map<std::string, std::string> m_params;
};

#endif


