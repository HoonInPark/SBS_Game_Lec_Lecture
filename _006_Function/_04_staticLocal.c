#include <stdio.h>

// 전역변수 -> countFunc() 지역변수로 이동
// int count = 0;

int countFunc()
{
	/*count는 지역변수이기 때문에
	countFunc()이 호출될 때 Stack에 생성되고
	return count할 때 레지스터의 임시변수에 값을 전달하고
	Stack에서 소멸된다.
	다음에 countFunc()이 호출될 때 다시 위와 같은 작업을 반복한다.*/
	int count = 0;
	count++;
	return count;
}

void callNumFunc(int param)
{
	printf("함수 호출 횟수는 %d입니다\n", param);
}

void main()
{
	int num = 0;
	for (int i = 0;i < 10;i++)
		num = countFunc();

	callNumFunc(num);
}