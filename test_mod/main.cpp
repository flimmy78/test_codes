
#include <stdio.h>
#include <windows.h>

int test_mod()
{
	int i, times = 2000000000;

	int a = 234345, b = 1024;
	i = 0;
	int xxx;
	int start = GetTickCount();
	while (i < times)
	{
		++i;
		xxx = (a+i) / b;
		++xxx;
	}

	int y = xxx;

	int start2 = GetTickCount();
	printf("%d, and y = %d\n", start2 - start, y);

	i = 0;
	while (i < times)
	{
		++i;
		xxx = (a+i) % b;
		++xxx;
	}
	y = xxx;

	int start3 = GetTickCount();
	printf("%d, and y = %d\n", start3 - start2, y);

	return 0;
}

int test_double_compare(double a, double b)
{
	if (a > b)
	{
		return 1;
	}
	if (a < b)
	{
		return -1;
	}
	return 0;
}

int main()
{
	test_mod();
	printf("=%d\n", test_double_compare(21.0, 20.999999999999999999999999999999));
	return 0;
}
