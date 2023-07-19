#include <stdio.h>

void main()
{
	int a, b, c;
	a = 10;
	b = 20;
	c = 30;
	/* printf => print format
	* %d 서식 문자 : decimal, 10진수로 출력하라
	* %x : 16진수
	* %#x : 16진수에 0x가 앞에 붙음
	* %o : 8진수
	* ""내의 서식문자를 이후의 값으로 순서대로 치환하여 출력한다.
	*/
	printf("10진수 %d %d %d\n", a, b, c);
	printf("16진수 %x %x %x\n", a, b, c);
	printf("16진수 %#x %#x %#x\n", a, b, c);
	printf("8진수 %#o %#o %#o\n", a, b, c);
}