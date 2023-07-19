#include <stdio.h>

/* C언어 시절에는 참/거짓을 나타내는 boolean 형이 없었다.
*  그래서 int를 사용해서 결과를 저장하는데 1은 참, 0은 거짓을 나타냈다.
*  이러다 보니 산술연산/관계논리연산을 혼재해서 사용하는 일이 종종 일어났다.
*  C++에서 boolean이 등장한다.
*  Java, C#은 엄격히 숫자와 참/거짓을 구별한다.
*  C, C++은 엄격히 구별하지 않고 사용한다.
*/
void main()
{
	int val1 = 10, val2 = 20, result = 0;
	printf("관계연산자\n");
	result = val1 > val2;
	printf("%d\n", result);
	result = val1 == val2;
	printf("%d\n", result);
	result = val1 <= val2;
	printf("%d\n", result);
	result = val1 == 10;
	printf("%d\n", result);

	val1 = 10, val2 = 20;
	printf("\n논리연산자\n");
	printf("%d\n", val1 > 10 || val2 == 20);  // (val1 > 10) || (val2 == 20)
	printf("%d\n", 1 && 1);			// 참 and 참
	printf("%d\n", 1 || 1);			// 참 or 참
	printf("%d\n", !1);				// 참을 부정 => 거짓
	printf("%d\n", !0);				// 거짓을 부정 => 참
	printf("%d\n", !-10);			// 0인 아닌 모든 숫자는 1(참)으로 해석
}