#include <stdio.h>

/*C언어에서 간단한 함수의 기능은
일반 함수를 만드는 것 보다
종종 매크로 함수를 만들어서 사용한다.*/

/*매크로 함수 만들 때 유의할 점
#define은 단순 치환이므로 아래처럼 매크로 함수를 작성하면
결과가 의도하지 않게 나올 수 있다.
*/
#define SQRT(x)		x*x			// 매크로 함수

double dsqrt(double x)			// 함수
{
	return x * x;
}

void main()
{
	/*전처리기에 의해 이렇게 바뀐다.
	printf("%d\n", 100*100);   
	printf("%d\n", -20*-20);
	printf("%.2lf\n", 2.5*2.5);

	printf("%d\n", 4+5*4+5);
	printf("%.2lf\n", 4.2+5.3*4.2+5.3);
	printf("%.2lf\n", dsqrt(4+5));  //함수로 점프 후 계산되어 리턴
	*/
	printf("%d\n", SQRT(100));   
	printf("%d\n", SQRT(-20));
	printf("%.2lf\n", SQRT(2.5));

	printf("%d\n", SQRT(4+5));
	printf("%.2lf\n", SQRT(4.2+5.3));
	printf("%.2lf\n", dsqrt(4+5));
}