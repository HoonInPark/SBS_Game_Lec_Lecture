#include <stdio.h>

// �������� -> countFunc() ���������� �̵�
// int count = 0;

int countFunc()
{
	/*count�� ���������̱� ������
	countFunc()�� ȣ��� �� Stack�� �����ǰ�
	return count�� �� ���������� �ӽú����� ���� �����ϰ�
	Stack���� �Ҹ�ȴ�.
	������ countFunc()�� ȣ��� �� �ٽ� ���� ���� �۾��� �ݺ��Ѵ�.*/
	int count = 0;
	count++;
	return count;
}

void callNumFunc(int param)
{
	printf("�Լ� ȣ�� Ƚ���� %d�Դϴ�\n", param);
}

void main()
{
	int num = 0;
	for (int i = 0;i < 10;i++)
		num = countFunc();

	callNumFunc(num);
}