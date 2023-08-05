#include <stdio.h>

// 초를 입력하고 시, 분, 초로 각각 결과를 리턴받아라
/*
*   C언어는 1개의 리턴값만을 허용한다.(파이썬은 여러 개 가능)
* 
	방법 1) 매개변수에 포인터변수를 사용하면 가능하다.
	방법 2) 여러 개 변수를 구조체 변수에 담아서 구조체 변수 1개만 리턴
*/

// C언어는 아래처럼 하는 게 불가능하다.
// 원래 에러가 나야 할 것 같은데... ???????
#include <stdio.h>

// 포인터 매개변수를 사용하여 시, 분, 초 값을 리턴하는 함수
void GetHourMinuteSecond(int totalSec, int* hour, int* minute, int* sec) {
    *hour = totalSec / 3600;
    totalSec %= 3600;

    *minute = totalSec / 60;
    totalSec %= 60;

    *sec = totalSec;
}

int main() {
    int hour = 0, minute = 0, sec = 0;
    int totalSec = 10000;

    // 포인터 매개변수를 사용하여 시, 분, 초 값을 얻어옴
    GetHourMinuteSecond(totalSec, &hour, &minute, &sec);

    // 결과 출력
    printf("%d시 %d분 %d초\n", hour, minute, sec);

    return 0;
}