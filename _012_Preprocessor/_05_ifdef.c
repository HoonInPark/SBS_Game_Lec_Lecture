#include <stdio.h>

#define _DEBUG_

/* 아래의 #ifdef _DEBUG_의 의미는 다음과 같다.
* _DEBUG_가 #define되어 있다면 
* #endif까지 컴파일에 포함시켜라.
* 
* 만약 _DEBUG_가 #define되어 있지 않다면
* 아래 #ifdef _DEBUG_ ~ #endif 사이의 영역은 컴파일에 포함되지 않고
* 사라지게 된다.
*/

void DebugPrint(char* str)
{
#ifdef _DEBUG_
	printf("%s\n", str);
#endif
}

void main()
{
	int num;
	char str[100];
	printf("숫자 입력 >> ");
	scanf_s("%d", &num);
	snprintf(str, sizeof(str), "입력 숫자 = %d", num);
	DebugPrint(str);
}