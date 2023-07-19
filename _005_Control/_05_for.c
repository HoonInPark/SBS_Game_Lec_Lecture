#include <stdio.h>

void main()
{
	/*
	int i = 0;
	for (;i <= 10;)
	{
		printf("%d\n", i++);
	}
	*/

	/*
	for (int i = 0;i <= 10;i++)
	{
		printf("%d\n", i);
	}
	*/

	int i = 0;
	for (;;)			// 무한루프
	{
		printf("%d\n", i++);
		if (i > 10)
			break;
	}
}