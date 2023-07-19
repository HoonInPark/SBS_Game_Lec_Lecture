#include <stdio.h>

/*전역변수
어느 함수에서나 사용할 수 있다.
*/
int num = 100;

int getNum()
{
	/*지역변수
	{}중괄호영역내에서만 유효하다.
	*/
	int num = 10;
	return num;
}

int getGNum()
{
	return num;
}

void main()
{
	int ret = getNum();
	printf("%d\n", ret);
	ret = getGNum();
	printf("%d\n", ret);
	printf("%d\n", num);
}