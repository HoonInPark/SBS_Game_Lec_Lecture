#include <stdio.h>

/* C��� �������� ��/������ ��Ÿ���� boolean ���� ������.
*  �׷��� int�� ����ؼ� ����� �����ϴµ� 1�� ��, 0�� ������ ��Ÿ�´�.
*  �̷��� ���� �������/����������� ȥ���ؼ� ����ϴ� ���� ���� �Ͼ��.
*  C++���� boolean�� �����Ѵ�.
*  Java, C#�� ������ ���ڿ� ��/������ �����Ѵ�.
*  C, C++�� ������ �������� �ʰ� ����Ѵ�.
*/
void main()
{
	int val1 = 10, val2 = 20, result = 0;
	printf("���迬����\n");
	result = val1 > val2;
	printf("%d\n", result);
	result = val1 == val2;
	printf("%d\n", result);
	result = val1 <= val2;
	printf("%d\n", result);
	result = val1 == 10;
	printf("%d\n", result);

	val1 = 10, val2 = 20;
	printf("\n��������\n");
	printf("%d\n", val1 > 10 || val2 == 20);  // (val1 > 10) || (val2 == 20)
	printf("%d\n", 1 && 1);			// �� and ��
	printf("%d\n", 1 || 1);			// �� or ��
	printf("%d\n", !1);				// ���� ���� => ����
	printf("%d\n", !0);				// ������ ���� => ��
	printf("%d\n", !-10);			// 0�� �ƴ� ��� ���ڴ� 1(��)���� �ؼ�
}