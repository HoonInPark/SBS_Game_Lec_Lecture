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

void main()
{
	int total = 0;
	double avg;
	int kor[3];
	int ARR_LEN = sizeof(kor) / sizeof(kor[0]);	// 12/4 => 3 �迭�� ����
	//int ARR_LEN = sizeof(kor) / sizeof(int);	// ��
	for (int i = 0;i < ARR_LEN;i++)
	{
		printf("%d��° �л� ���� ���� �Է� >> ", i + 1);
		scanf_s("%d", &kor[i]);
	}

	for (int i = 0;i < ARR_LEN;i++)
		total += kor[i];

	avg = (double)total / ARR_LEN;

	printf("������ %d, ����� %.2lf\n", total, avg);
}