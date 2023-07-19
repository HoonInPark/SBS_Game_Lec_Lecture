#include <stdio.h>

void main()
{
	char str0[] = { 'k','o','r','e','a' };
	char str1[] = "korea";
	str1[5] = 'i';

	printf("%s\n", str0);
	printf("%s\n", str1);
}