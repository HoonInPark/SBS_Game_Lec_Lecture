#include <stdio.h>
#include <string.h>

/*홍길동의 이름, 나이, 키를 입력받고 출력하세요*/

void main()
{
	char name[20];
	int age;
	float height;

	printf("이름 >> ");
	fgets(name, sizeof(name), stdin);  // scanf_s는 "홍 길동"을 입력하면 '홍'만 입력된다.
	/* fgets는 \n값까지 name의 끝에 저장한다.
	 그래서 끝의 \n값을 '\0'으로 변환한다.
	*/
	name[strlen(name)-1] = '\0';
	printf("나이 >> ");
	scanf_s("%d", &age);
	printf("키 >> ");
	scanf_s("%f", &height);

	printf("************\n");
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("키 : %.2f\n", height);
	printf("************\n");
}