#include <stdio.h>

void main()
{
	char ch;
	printf("연산자 입력(+ - * / %) >> ");
	scanf_s("%c", &ch);

	// 숫자만 가능(문자도 숫자로 저장된다)
	// 문자열 비교는 C#과 달리 안된다.
	switch (ch)
	{
	case '+':
		printf("+연산자 입니다\n");
		break;
	case '-':
		printf("-연산자 입니다\n");
		break;
	case '*':
		printf("*연산자 입니다\n");
		break;
	case '/':
		printf("/연산자 입니다\n");
		break;
	case '%':
		printf("%연산자 입니다\n");
		break;
	default:
		printf("%c 이것은 산술연산자가 아닙니다\n", ch);
		break;
	}
}