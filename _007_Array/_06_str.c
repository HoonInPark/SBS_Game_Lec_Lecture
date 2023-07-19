#include <stdio.h>

// C언어의 문자열 구조
/*
-C언어에서의 char
  1) 정수형 : -127 ~ 128
  2) 문자형 : 아스키코드표
  어차피 문자는 메모리에 저장될 때는 숫자로 변환되어 저장된다.
-C#언어에서의 char
  오직 문자형으로만 사용한다.
  대신 -127 ~ 128범위의 정수형은 byte
*/
/* C언어에서는 0을 널(값이 정해지지 않음)의 표현으로 중의적으로
* 사용한다.
널값
'\0' == 0 == NULL 는 모두 널의 표현이다.

C언어의 컴파일러는 문자열을 읽다가 끝에 NULL을 만나면
읽기를 멈춘다.
*/
void main()
{
	// 아래 5개 배열은 모두 동일한 값과 크기를 가진다.
	char str0[] = { 'k', 'o', 'r', 'e', 'a', '\0'};
	char str1[] = { 'k', 'o', 'r', 'e', 'a', NULL };
	char str2[] = { 'k', 'o', 'r', 'e', 'a', 0 };
	// 마지막에 NULL이 들어있다는 것을 명심해야 한다.
	// 그래서 크기가 6이다.
	char str3[] = "korea";  
	char str4[6] = "korea";

	//시작위치부터 1글자씩 읽다가 NULL을 만나면 멈춘다
	printf("%s\n", str0);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	printf("%s\n", str4);

	for (int i = 0;i < 6;i++) 
	{
		printf("%c, %d\n", str0[i], str0[i]);
	}
}