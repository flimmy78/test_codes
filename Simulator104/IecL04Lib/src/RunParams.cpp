#include <assert.h>
#include "RunParams.h"

RunParams::RunParams(const std::string& paraString)
{
	m_params.clear();
	if(paraString.size() > 0)
	{
		this->split(paraString, "=, ");
	}
}

RunParams::~RunParams()
{
	m_params.clear();
}

std::string RunParams::getString(const std::string& parameter) const
{
	std::string rtnString;
	std::map<std::string, std::string>::const_iterator itr = m_params.find(parameter);
	if(itr != m_params.end())
	{
		rtnString = itr->second;  
	}
	return rtnString;
}

UInt32	RunParams::getUInt32(const std::string& parameter) const
{
	UInt32 rtnValue = 0;
	std::string valueString = this->getString(parameter);
	rtnValue = strtoul(valueString.c_str(), NULL, 0);
	return rtnValue;
}

UInt8  RunParams::getUInt8(const std::string& parameter) const
{
	UInt8 rtnValue = 0;
	std::string valueString = this->getString(parameter);
	rtnValue = static_cast<UInt8>(strtoul(valueString.c_str(), NULL, 0));
	return rtnValue;
}


int	RunParams::getInteger(const std::string& parameter) const
{
	int rtnValue = 0;
	std::string valueString = this->getString(parameter);
	rtnValue = static_cast<int>(strtol(valueString.c_str(), NULL, 0));
	return rtnValue;
}

float RunParams::getFloat(const std::string& parameter) const
{
	float rtnValue = 0;
	std::string valueString = this->getString(parameter);
	rtnValue = static_cast<float>(strtod(valueString.c_str(), NULL));
	return rtnValue;
}


bool RunParams::isSet(const std::string& parameter) const
{
	return m_params.find(parameter) != m_params.end();
}

void RunParams::set(const std::string& parameter, const std::string& valueString)
{
	assert(parameter.size() > 0);
	assert(valueString.size() > 0);
	m_params[parameter] = valueString;
}


void	RunParams::split(const  string  & theString,const  string  & delimiters)
{
	std::string str = theString;
	std::vector<std::string> tokens;
	string::size_type lastPos = str.find_first_not_of(delimiters, 0);
    string::size_type pos     = str.find_first_of(delimiters, lastPos);

    while (string::npos != pos || string::npos != lastPos)
    {
        // Found a token, add it to the vector.
        tokens.push_back(str.substr(lastPos, pos - lastPos));
        // Skip delimiters.  Note the "not_of"
        lastPos = str.find_first_not_of(delimiters, pos);
        // Find next "non-delimiter"
        pos = str.find_first_of(delimiters, lastPos);
    }

	assert((tokens.size()%2) == 0);
	for(unsigned int index =0; index < tokens.size();index +=2)
	{
		m_params[tokens[index]] = tokens[index +1]; 
	}
}


