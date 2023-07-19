#include <stdio.h>

typedef struct _Human
{
	char name[20];
	int age;
	float height;
}Human;

/* hong의 값이 human에 모두 복사된다. 잘된다.
* 하지만 구조체는 여러 다른 변수들의 집합이므로
* 구조체를 복사하는 것은 프로세스에 부하를 주는 일이다.
* 그러므로 아래처럼 사용하는 것보다는 * 를 사용해서 전달하는 경우가 더 많다.
*/
void ShowHuman(Human human)
{
	printf("%s\n", human.name);
	printf("%d\n", human.age);
	printf("%.2f\n", human.height);
}

void main()
{
	Human hong = { "홍길동", 24, 174.5f };
	ShowHuman(hong);
}