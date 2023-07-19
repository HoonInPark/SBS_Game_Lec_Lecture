#include <stdio.h>

void main()
{
	double d1 = 3.4;
	double d2 = 2.1;
	int res1 = d1 * d2;
	int res2 = (int)d1 * (int)d2;
	printf("res1=%d, res2=%d\n", res1, res2);
}