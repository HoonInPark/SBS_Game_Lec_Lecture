#include <stdio.h>

// countFunc함수의 호출횟수 저장
int count = 0;

void countFunc()
{
	count++;
}

void callNumFunc()
{
	printf("함수 호출 횟수는 %d입니다\n", count);
}

void main()
{
	for (int i = 0;i < 10;i++)
		countFunc();

	callNumFunc();
}