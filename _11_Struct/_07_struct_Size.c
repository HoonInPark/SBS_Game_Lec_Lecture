#include <stdio.h>

/*St1�� St2�� ��������� ������ �����ѵ�
  ������ �ٸ���.*/
typedef struct _St1
{
	char ch;
	char ch2;
	short s;
	int i;
	double d;
}St1;

typedef struct _St2
{
	char ch;
	char ch2;
	double d;
	short s;
	int i;
}St2;

void main()
{
	printf("St1�� ũ�� : %d\n", sizeof(St1));	// 16byte
	printf("St2�� ũ�� : %d\n", sizeof(St2));	// 24byte
}
