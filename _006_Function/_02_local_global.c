#include <stdio.h>

/*��������
��� �Լ������� ����� �� �ִ�.
*/
int num = 100;

int getNum()
{
	/*��������
	{}�߰�ȣ������������ ��ȿ�ϴ�.
	*/
	int num = 10;
	return num;
}

int getGNum()
{
	return num;
}

void main()
{
	int ret = getNum();
	printf("%d\n", ret);
	ret = getGNum();
	printf("%d\n", ret);
	printf("%d\n", num);
}