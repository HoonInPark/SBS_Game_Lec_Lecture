#include <stdio.h>

typedef struct _Human
{
	char name[20];
	int age;
	float height;
}Human;

/* ����ü ��ü�� ����Ǵ� ���� �ƴ϶�
* ������ �ּҸ� ���޵ȴ�.
* ������ ���� ũ��� x86������ 4byte, x64������ 8byte�� ������.
* ����ü ��ü�� �����ϴ� �ͺ��� ���ϰ� ����.
*/
void ShowHuman(Human* pHuman)
{
	printf("%s\n", pHuman->name);
	printf("%d\n", pHuman->age);
	printf("%.2f\n", pHuman->height);
}

void main()
{
	Human hong = { "ȫ�浿", 24, 174.5f };
	ShowHuman(&hong);
}