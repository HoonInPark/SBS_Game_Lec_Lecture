#include <stdio.h>

void main()
{
	int num = 0;
	printf("정수 입력 >> ");
	scanf_s("%d", &num);

	if (num > 10)
		printf("num은 10보다 큽니다\n");
	else if(num == 10)
		printf("num은 10보다 같습니다\n");
	else
		printf("num은 10보다 작습니다\n");
}