#include <stdio.h>

void main()
{
	char str0[] = "korea"; // ���ڿ������迭(���� �ٲ�)
	char* str1 = "korea";  // ������ڿ�(���ڴ� ���ٲ�, �׳� ��)

	printf("%s\n", str0);
	printf("%s\n", str1);

	str0[0] = 'c';	
	printf("%s\n", str0);
	str1[0] = 'c';
	printf("%s\n", str1);
}