#include <stdio.h>

void main()
{
	char ch;
	printf("������ �Է�(+ - * / %) >> ");
	scanf_s("%c", &ch);

	// ���ڸ� ����(���ڵ� ���ڷ� ����ȴ�)
	// ���ڿ� �񱳴� C#�� �޸� �ȵȴ�.
	switch (ch)
	{
	case '+':
		printf("+������ �Դϴ�\n");
		break;
	case '-':
		printf("-������ �Դϴ�\n");
		break;
	case '*':
		printf("*������ �Դϴ�\n");
		break;
	case '/':
		printf("/������ �Դϴ�\n");
		break;
	case '%':
		printf("%������ �Դϴ�\n");
		break;
	default:
		printf("%c �̰��� ��������ڰ� �ƴմϴ�\n", ch);
		break;
	}
}