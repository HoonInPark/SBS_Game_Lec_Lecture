#include <stdio.h>

/* 조건연산자(삼항연산자)
* D = A ? B : C;
* A항이 참이면 B가 D에 대입
* A항이 거짓이면 C가 D에 대입
*/
void main()
{
	int val1 = 10, val2 = 20;
	int result = 0;
	result = val1 >= 10 ? val1 : val2;
	printf("%d\n", result);
}


/*연산자 우선순위
2가지만 기억한다
1) 먼저 연산하고 싶으면 () 괄호로 묶어라.
2) = (대입연산자)는 우측 연산이 끝나고 마지막에 처리된다.
*/