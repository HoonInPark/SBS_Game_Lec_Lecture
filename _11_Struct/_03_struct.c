#include <stdio.h>
#include <string.h>

#define HUMAN_NUM 3

/* C언어에서 구조체 사용은 struct Human human; 처럼 struct키워드를 붙여야 한다.
* 다만 프로그래머들이 구조체를 계속 사용하다보니 struct를 생략해서 표현하기를
* 원했다.
* 그래서 C++에서는 struct의 생략이 가능하다.
* 
* C언어에서는 typedef를 사용하면 struct의 생략이 가능하다.
*/

// 간단한 방법
struct Human
{
	char name[20];
	int age;
	float height;
};
/*
// 1번째 다른 방법
struct _Human
{
	char name[20];
	int age;
	float height;
};
typedef struct _Human Human;

// 2번째 방법
typedef struct _Human
{
	char name[20];
	int age;
	float height;
}Human;
*/
void main()
{
	//struct Human human; // -> struct 형의 와꾸(?)인데 Human이라 이름을 붙임. 그리고 그것의 객체(?)의 이름을 human으로 한다는 의미.
	Human human;

	printf("이름 >> ");
	fgets(human.name, sizeof(human.name), stdin);
	human.name[strlen(human.name) - 1] = '\0';
	printf("나이 >> ");
	scanf_s("%d", &human.age);
	printf("키 >> ");
	scanf_s("%f", &human.height);

	printf("************\n");
	printf("이름 : %s\n", human.name);
	printf("나이 : %d\n", human.age);
	printf("키 : %.2f\n", human.height);
	printf("************\n");
}