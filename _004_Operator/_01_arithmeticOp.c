/*
[������]
1) ����ڿ����� �迭
   ��������� - ��ȣ, ���մ���, ����
2) ���迬���� �迭
   ���迬���� - ��, ��Ʈ��
3) ���ǿ�����
   ���ǿ����� - ���׿�����
4) ��Ÿ
   sizeof, ...
*/

#include <stdio.h>

void main()
{
	printf("���������\n");
	printf("5+4=%d\n", 5 + 4);
	printf("5-4=%d\n", 5 - 4);
	printf("5*4=%d\n", 5 * 4);
	printf("5/4=%d\n", 5 / 4);	// ��
	printf("5%4=%d\n", 5 % 4);	// ������

	int val = 10;
	printf("\n���մ��Կ�����\n");
	printf("%d\n", val += 10);  // val = val + 10
	printf("%d\n", val -= 10);  // val = val - 10
	printf("%d\n", val *= 10);  // val = val * 10
	printf("%d\n", val /= 10);  // val = val / 10
	printf("%d\n", val %= 10);  // val = val % 10

	val = 1;
	printf("\n����������\n");
	printf("�������� = %d\n", ++val);  // ���� ����
	printf("%d\n", val);
	printf("�������� = %d\n", val++);  // ��� ����
	printf("%d\n", val);

	val = 100;
	printf("\n��ȣ������\n");
	printf("%d\n", +val);
	printf("%d\n", -val);
}