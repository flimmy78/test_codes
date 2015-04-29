
#include "base_header.h"

int s_int = 1;

const char* g_str = "123456";

//char* g_str = "123456";

//const int cc = 2;
int cc = 2;

int get_value(){
	return s_int++; g_str = 0; cc = 3;
}