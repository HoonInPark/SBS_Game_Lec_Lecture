#include <stdio.h>
/*
1) C#�� �迭
int[] kor = new int[3];
 => kor�� ���������� Heap�� �ִ� int�迭 ��ü�� ����Ű�� �ִ�.
	int�迭 ��ü�� int�� ������ 3�� �̾��� �ִ�.

2) C�� �迭
int kor[3];
 => int �ڷ����� ���� ������ kor�̶�� ��ǥ������
	������ 3�� �̾��� �ִ�.
*/

#define KOR_NUM	5

void main()
{
	int total = 0;
	double avg;
	int kor[KOR_NUM];
	for (int i = 0;i < KOR_NUM;i++)
	{
		printf("%d��° �л� ���� ���� �Է� >> ", i + 1);
		scanf_s("%d", &kor[i]);
	}

	for (int i = 0;i < KOR_NUM;i++)
		total += kor[i];

	avg = (double)total / KOR_NUM;

	printf("������ %d, ����� %.2lf\n", total, avg);
}