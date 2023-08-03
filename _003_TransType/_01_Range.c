/* 형변환
* 1) 자동형변환
*   서로 다른 자료형끼리는 연산이 불가능하다.
*   그러므로 컴파일러는 자동으로 연산하는 자료형중에 한쪽으로 변환시킨다.
*   * 표현범위가 큰 쪽으로 자동으로 맞춰진다
*   실수 > 정수
*   double > float > int > short > char
* 
*   float(4byte)    >  long long(8byte)
* 
* 2) 강제형변환
*  int i = 1;
*  int j = 2;
*  double result = (double)i/j;
* 
*  i를 double형으로 변환시켜라.하고 컴파일러한테 전달
*/

#include <stdio.h>

void main()
{
	// 값의 범위를 벗어나는 값을 담으면 Carry에 의해 값이 왜곡된다.
	char c = 128;
	printf("%d\n", c);

	char ch = 10;    // 표현범위 -128~127
	int i = 1000;	 // 표현범위 -약21억~약21억
	float f = 1.5f;	 // 표현범위 -무한대~무한대
	double d = ch * i * f + 10000;

	printf("결과 : %lf\n", d);
}