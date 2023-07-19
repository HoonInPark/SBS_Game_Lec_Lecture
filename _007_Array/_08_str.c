#include <stdio.h>

void main()
{
	char str0[] = "korea"; // 문자열변수배열(문자 바꿈)
	char* str1 = "korea";  // 상수문자열(문자는 못바꿈, 그냥 씀)

	printf("%s\n", str0);
	printf("%s\n", str1);

	str0[0] = 'c';	
	printf("%s\n", str0);
	str1[0] = 'c';
	printf("%s\n", str1);
}