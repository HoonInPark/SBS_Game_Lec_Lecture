#include <stdio.h>

typedef struct _Human
{
	char name[20];
	int age;
	float height;
}Human;

/* hong�� ���� human�� ��� ����ȴ�. �ߵȴ�.
* ������ ����ü�� ���� �ٸ� �������� �����̹Ƿ�
* ����ü�� �����ϴ� ���� ���μ����� ���ϸ� �ִ� ���̴�.
* �׷��Ƿ� �Ʒ�ó�� ����ϴ� �ͺ��ٴ� * �� ����ؼ� �����ϴ� ��찡 �� ����.
*/
void ShowHuman(Human human)
{
	printf("%s\n", human.name);
	printf("%d\n", human.age);
	printf("%.2f\n", human.height);
}

void main()
{
	Human hong = { "ȫ�浿", 24, 174.5f };
	ShowHuman(hong);
}