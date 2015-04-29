
#include <stdio.h>
#include <map>
using namespace	std;

int main()
{
	std::map < int, int* > m;

	std::map < int, int* >::iterator a;

	m[3] = new int(3);

	a = m.begin();

	printf("a:[%x], %x\n", a, a->second);

	m.erase(a);

	printf("a:[%x], %x\n", a, a->second);


	a = m.end();
	printf("a:[%x], %x\n", a, a->second);

	return 0;
}
