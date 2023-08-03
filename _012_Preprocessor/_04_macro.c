#include <stdio.h>

/*매크로 함수는 일반 함수와 다르게 단순 치환되므로
x에 수식이 들어가면 연산자 우선 순위에 의해 의도한 결과가 나오지 않을 수 있다.
그러므로 매크로 함수의 매개변수 x는 반드시 ()를 묶어서
()안의 수식이 먼저 연산되도록 해야 한다.

반드시 매크로 함수의 x와 매크로 함수 전체에서 ()를 묶어줘야 
정확한 연산을 얻을 수 있다.
*/
#define SQRT(x)		((x)*(x))			// 매크로 함수

double dsqrt(double x)			// 함수
{
	return x * x;
}

void main()
{
	printf("%d\n", SQRT(100));
	printf("%d\n", SQRT(-20));
	printf("%.2lf\n", SQRT(2.5));

	printf("%d\n", SQRT(4 + 5));
	printf("%.2lf\n", SQRT(4.2 + 5.3));
	printf("%.2lf\n", dsqrt(4 + 5));
}