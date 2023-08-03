#include <stdio.h>

void main()
{
	int val1 = 17, val2 = 33;

	printf("비트논리연산자\n");
	printf("%d\n", val1 & val2);	// 비트간에 and
	printf("%d\n", val1 | val2);	// 비트간에 or
	printf("%d\n", val1 ^ val2);	// 비트간에 xor (같으면 0, 다르면 1)
	printf("%d\n", ~val1);			// 비트를 반전
}