

#include <afx.h>
#include <sstream>

std::string convertBoolean(bool val)
{
	std::ostringstream ossData;
	ossData << val;
	return ossData.str();
}

int main()
{
	bool b = 11111;
	char* pChar = (char*)&b;
	*pChar = -1;
	printf("%s\n", convertBoolean(b).c_str());
	printf("%s\n", convertBoolean(*pChar).c_str());
	//return 0;

	CString s;
	s = "123456789";
	CString y = s;
	char buf[1024];
	sprintf(buf, "xxx is: %s\n", s.GetBuffer(0));
	printf(buf);
	printf(y.GetBuffer(0));
	return 0;
}
