
#include <stdio.h>

#include "map.h"


int main()
{
	map<int, int> my_map;
	my_map.clear();
	my_map[2] = 3;
	my_map[3] = 4;
	return 0;
}
