#include <stdio.h>

/*St1과 St2의 멤버변수의 구성은 동일한데
  순서만 다르다.*/
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
	printf("St1의 크기 : %d\n", sizeof(St1));	// 16byte
	printf("St2의 크기 : %d\n", sizeof(St2));	// 24byte
}
