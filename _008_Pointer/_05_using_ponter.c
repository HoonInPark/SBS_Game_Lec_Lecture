#include <stdio.h>

// 초를 입력하고 시, 분, 초로 각각 결과를 리턴받아라
/*
*   C언어는 1개의 리턴값만을 허용한다.(파이썬은 여러 개 가능)
*
	포인터의 2번째 용법) 매개변수에 포인터변수를 사용해서 결과를 리턴받는다.
	   - 포인터변수를 매개변수로 해서 변수의 주소를 전달하면
	     지역변수의 경계를 넘어서 값을 직접 주소를 통해 전달할 수 있다.
*/
void GetHourMinuteSecond(int totalSec, int* pHour, int* pMin, int* pSec)
{
	int hour = 0, minute = 0, sec = 0;

	sec = totalSec % 60;
	minute = totalSec / 60;
	hour = minute / 60;
	minute = minute % 60;

	*pHour = hour;
	*pMin = minute;
	*pSec = sec;
}

void main()
{
	int hour = 0, minute = 0, sec = 0;
	GetHourMinuteSecond(3725, &hour, &minute, &sec);
	printf("%02d:%02d:%02d\n", hour, minute, sec); // 만약 값이 0이면 00과 같이 0으로 채워넣는 것을 말한다.
	GetHourMinuteSecond(4000, &hour, &minute, &sec);
	printf("%02d:%02d:%02d\n", hour, minute, sec);
}