#include <stdio.h>

/* 포인터의 3번째 용법
* 함수를 포인터 변수에 저장하고,
* 그 포인터를 함수처럼 호출하면 포인터가 가리키는 함수가 호출된다.
* 
* 프로그램 내부가 아니라 외부에서 전달하는 함수에 따라 동작을 변화시킬 수 있다.
*  - 프로그램의 유연성 증가
*  - 이벤트 핸들러 함수 제작
* 
* 이 함수 포인터가 C#에서 델리게이트로 발전한다.
* 함수 포인터와 델리게이트의 용법은 동일하다.
*/

void KorPresentation()
{
	printf("정수 입력 >> ");
}

void EngPresentation()
{
	printf("Input Integer >> ");
}

/*  void (*fptr)() => 포인터 변수
* 위 포인터 변수는 리턴형은 void, 매개변수는 없는(void)인 함수만 가리킬 수 있다.
* 만약 int (*fptr)(int, int) 와 같은 포인터 변수는
* 리턴형은 int, 매개변수도 int가 2개인 함수만 가리킬 수 있다.
* 
* 함수는 메모리의 Code Segment영역에 로딩된다.
* 그 함수의 시작위치를 저장하게 된다.
*/

int GetInputValue(void (*fptr)())
{
	int num = 0;
	fptr();
	scanf_s("%d", &num);
	return num;
}

void main()
{
	int val = GetInputValue(KorPresentation);
	printf("입력 값은 %d\n", val);
	val = GetInputValue(EngPresentation);
	printf("Input Value is %d\n", val);
}