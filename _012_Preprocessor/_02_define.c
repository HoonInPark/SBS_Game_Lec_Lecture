#include <stdio.h>

/*전처리 단계에서
소스코드에서 PI라고 되어있는 문자열을 찾아서 
모두 3.14치환한다.

그리고 컴파일 단계로 넘겨준다.
*/
#define PI	3.14

void main()
{
	float rad, area, length;
	printf("반지름 입력 >> ");
	scanf_s("%f", &rad);
	/*전처리기에 의해 아래처럼 치환되고 컴파일 단계로 넘어간다.
	area = rad * rad * 3.14;
	length = rad * 2 * 3.14;
	*/
	area = rad * rad * PI;
	length = rad * 2 * PI;
	printf("반지름 %.2f인 원의 넓이는 %.2f입니다\n", rad, area);
	printf("반지름 %.2f인 원의 넓이는 %.2f입니다\n", rad, length);
}