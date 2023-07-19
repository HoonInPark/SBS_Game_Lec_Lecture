#include <stdio.h>
#include <string.h>

#define HUMAN_NUM 3

/*홍길동의 이름, 나이, 키를 입력받고 출력하세요*/

/* 구조체는 하나의 추상적 개념을 표현하는 여러 개의 변수들을
* 1개의 그룹으로 묶어준다.
* 이 1개의 그룹으로 된 변수를 선언하면 프로그램을 훨씬 단순하게 표현할 수 있다.
* 
* struct 는 C++에서 class로 발전하게 된다.
* 
* C언어의 구조체는 변수들의 집합
* C++의 struct/class는 변수들 + 함수들의 집합이다.
*/

struct Human
{
	char name[20];
	int age;
	float height;
};

void main()
{
	struct Human human;

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