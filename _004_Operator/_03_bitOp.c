#include <stdio.h>

void main()
{
	int val1 = 17, val2 = 33;

	printf("��Ʈ��������\n");
	printf("%d\n", val1 & val2);	// ��Ʈ���� and
	printf("%d\n", val1 | val2);	// ��Ʈ���� or
	printf("%d\n", val1 ^ val2);	// ��Ʈ���� xor (������ 0, �ٸ��� 1)
	printf("%d\n", ~val1);			// ��Ʈ�� ����
}