/* va_arg example */
#include <stdio.h>
#include <stdarg.h>

int FindMax ( int amount, ...)
{
  int i,val,greater;
  va_list vl;
  va_start(vl,amount);
  greater=va_arg(vl,int);
  for (i=1;i<amount;i++)
  {
    val=va_arg(vl,int);
    greater=(greater>val)?greater:val;
  }
  va_end(vl);
  return greater;
};

int main ()
{
	int m = 0;
	m = FindMax (7,702,422,631,834,892,104,772);
	printf ("The greatest one is: %d\n",m);
	
	return 0;
}