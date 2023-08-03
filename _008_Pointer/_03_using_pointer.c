#include <stdio.h>

/* [포인터의 1번째 용법]
 - 배열을 함수에서 접근할 때 
   매개변수로 배열의 시작위치를 가리킬 때 사용한다.
   Why? 배열을 복사하기에 부담스러우니까
*/

/*
C#은 배열의 참조변수가 객체를 가리키므로
객체내에 배열의 길이정보까지 들어있다.
그러므로 참조변수만 인자로 넘겨주면 된다.

그러나 C에서 배열의 이름은 시작위치만을 나타내고
배열의 끝은 어디까지인지 알 수 없다.
그러므로 C에서는 배열의 이름을 넘길 때 포인터 변수로 시작주소를 받고
배열의 길이정보도 함께 넘겨줘야 한다.
*/
/* 
* 특별히 배열을 매개변수로 받을 때 아래처럼 매개변수 선언할 수도 있다.
* 하지만 컴파일러는 아래 int objArr[]을 int* objArr로 변환시킨다.
int Sum(int objArr[], int len)
*/
// 시작위치, 길이정보
int Sum(int* objArr, int len)
{
	int total = 0;
	for (int i = 0;i < len;i++)
		total += objArr[i];  // *(objArr+i) 이렇게 해도 동일하다.
	return total;
}

void main()
{
	int kor[] = { 99, 89, 77, 80, 90 };
	int math[] = { 89, 88, 80, 90, 100, 78, 77 };
	int total = 0;

	total = Sum(kor, sizeof(kor) / sizeof(int));
	printf("kor의 총합은 %d입니다\n", total);
	total = Sum(math, sizeof(math) / sizeof(int));
	printf("math의 총합은 %d입니다\n", total);
}