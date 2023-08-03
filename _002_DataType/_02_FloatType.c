#include <stdio.h>

void main()
{
	float a;   // 소수점 6 자리까지 신뢰
	double b;  // 소수점 15 자리까지 신뢰(정밀도가 높다)
	a = 3.14f;
	b = 5.689;
	printf("%f %lf\n", a, b);
}