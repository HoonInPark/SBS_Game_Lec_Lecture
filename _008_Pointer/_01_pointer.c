#include <stdio.h>

/*포인터 변수
변수나 배열의 주소를 저장하는 변수
int*는 int의 주소
char*는 char의 주소
double*는 double의 주소
*/

void main()
{
	int num = 100;
	//포인터 변수 = num의 주소값
	int* pnum = &num;

	printf("%llu, %p\n", pnum, pnum);
	printf("%llu, %p\n", &num, &num);

	printf("%d, %d\n", num, *pnum);

	num = 999;
	printf("%d, %d\n", num, *pnum);

	*pnum = 1200;
	printf("%d, %d\n", num, *pnum);
}