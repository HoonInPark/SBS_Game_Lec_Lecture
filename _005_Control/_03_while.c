#include <stdio.h>

void main()
{
	/*
	int i = 1;
	while (i <= 10)
	{
		printf("%d\n", i++);
	}
	*/

	int i = 1;

	// 무한루프
	// C언어는 1을 참이라고도 인식하므로 무한루프 돌릴 때 종종 이렇게 사용한다.
	// Java/C#은 이렇게 하면 에러 발생
	while (1)
	{
		printf("%d\n", i++);
		if (i > 10)
			break;
	}
}