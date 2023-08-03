#include <stdio.h>

typedef struct _Human
{
	char name[20];
	int age;
	float height;
}Human;

/* 구조체 전체가 복사되는 것이 아니라
* 포인터 주소만 전달된다.
* 포인터 변수 크기는 x86에서는 4byte, x64에서는 8byte를 가진다.
* 구조체 전체를 복사하는 것보다 부하가 적다.
*/
void ShowHuman(Human* pHuman)
{
	printf("%s\n", pHuman->name);
	printf("%d\n", pHuman->age);
	printf("%.2f\n", pHuman->height);
}

void main()
{
	Human hong = { "홍길동", 24, 174.5f };
	ShowHuman(&hong);
}