#include <stdio.h>

void main()
{
	int i = 128;
	char ch = i;
	printf("int=%d, char=%d\n", i, ch);

	char c = 120;
	int j = 10000;
	printf("result=%d\n", c * j);
}