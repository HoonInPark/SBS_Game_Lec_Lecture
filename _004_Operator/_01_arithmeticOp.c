/*
[연산자]
1) 산술자연산자 계열
   산술연산자 - 부호, 복합대입, 증감
2) 관계연산자 계열
   관계연산자 - 논리, 비트논리
3) 조건연산자
   조건연산자 - 삼항연산자
4) 기타
   sizeof, ...
*/

#include <stdio.h>

void main()
{
	printf("산술연산자\n");
	printf("5+4=%d\n", 5 + 4);
	printf("5-4=%d\n", 5 - 4);
	printf("5*4=%d\n", 5 * 4);
	printf("5/4=%d\n", 5 / 4);	// 몫
	printf("5%4=%d\n", 5 % 4);	// 나머지

	int val = 10;
	printf("\n복합대입연산자\n");
	printf("%d\n", val += 10);  // val = val + 10
	printf("%d\n", val -= 10);  // val = val - 10
	printf("%d\n", val *= 10);  // val = val * 10
	printf("%d\n", val /= 10);  // val = val / 10
	printf("%d\n", val %= 10);  // val = val % 10

	val = 1;
	printf("\n증감연산자\n");
	printf("전위증가 = %d\n", ++val);  // 증가 먼저
	printf("%d\n", val);
	printf("후위증가 = %d\n", val++);  // 출력 먼저
	printf("%d\n", val);

	val = 100;
	printf("\n부호연산자\n");
	printf("%d\n", +val);
	printf("%d\n", -val);
}