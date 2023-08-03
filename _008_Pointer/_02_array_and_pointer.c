#include <stdio.h>

/* int* pnum;은 
* int num의 주소나
* int arr[]과 같은 배열의 시작주소를 저장한다.
* 
* 배열의 이름은 배열전체의 시작주소를 의미한다.
*/

void main()
{
	int kor[] = { 99, 100, 88, 78, 89 };
	int* parr = kor;

	// %p는 16진수로 포인터 변수의 값을 출력할 때 사용
	printf("%p\n", kor);
	printf("%p\n", &kor[0]);

	// parr은 배열의 시작위치를 가리킨다.
	for (int i = 0;i < sizeof(kor) / sizeof(int);i++)
		printf("%d, ", parr[i]);	// kor[i]대신 포인터로 접근할 수 있다.
	printf("\n");

	/*포인터 변수에 더하는 i는 주소를 i만큼 증가하는 의미가 아니고
	sizeof(int) * i 만큼 주소를 이동하라는 의미이다.
	즉 i는 인덱스의 의미이다. */
	for (int i = 0;i < sizeof(kor) / sizeof(int);i++)
		printf("%d, ", *(parr + i));
	printf("\n");
}