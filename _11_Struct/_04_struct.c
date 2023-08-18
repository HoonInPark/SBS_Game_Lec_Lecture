#include <stdio.h>
#include <string.h>

#define HUMAN_NUM 3

typedef struct _Human
{
	char name[20];
	int age;
	float height;
}Human;

void main()
{
	Human human; // 우선 구조체를 하나 찍어낸 다음...
	Human* pHuman = &human; // 그것에 대한 포인터를 만든다.
	
	/* 구조체 포인터 변수로 접근하는 방법은 아래 2가지 모두 가능하지만
	* 일반적으로 -> 을 사용해서 멤버변수를 접근한다.
	(*pHuman).name; // 역참조 후 그것에 직접 접근
	pHuman->name; // 그냥 포인터로 가리키기.
	*/

	printf("이름 >> ");
	fgets(pHuman->name, sizeof(pHuman->name), stdin);
	pHuman->name[strlen(pHuman->name) - 1] = '\0';
	printf("나이 >> ");
	scanf_s("%d", &pHuman->age);
	printf("키 >> ");
	scanf_s("%f", &pHuman->height);
	/*
	c언어에서의 ->를 읽는 방법에 대한 주의: 
	&pHuman->height는
	(&pHuman)->height이 아니라
	&(pHuman->height)이다.
	*/

	printf("************\n");
	printf("이름 : %s\n", pHuman->name);
	printf("나이 : %d\n", pHuman->age);
	printf("키 : %.2f\n", pHuman->height);
	printf("************\n");
}