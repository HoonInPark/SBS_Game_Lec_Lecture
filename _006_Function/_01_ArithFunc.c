#include <windows.h>
#include <stdio.h>

enum {
	ADD=1, SUB, MUL, DIV, EXIT
};



void showMenu()
{
	printf("---연산 선택---\n");
	printf("1. 더하기\n");
	printf("2. 빼기\n");
	printf("3. 곱하기\n");
	printf("4. 나누기\n");
	printf("5. 종료\n");
}

int getSelectMenu()
{
	int num;
	printf("번호 선택 >> ");
	scanf_s("%d", &num);
	return num;
}

double Add(double dNum0, double dNum1)
{
	return dNum0 + dNum1;
}

double Sub(double dNum0, double dNum1)
{
	return dNum0 - dNum1;
}

double Mul(double dNum0, double dNum1)
{
	return dNum0 * dNum1;
}

double Div(double dNum0, double dNum1)
{
	return dNum0 / dNum1;
}

double getDoubleNum()
{
	double num;
	printf("실수 입력 >> ");
	scanf_s("%lf", &num);
	return num;
}

void printResult(double result)
{
	printf("\n");
	printf("결과는 %.2lf입니다\n", result);
}

void cls()
{
	// 콘솔 창의 화면을 모두 지운다.
	system("cls");
}

void main()
{
	int isRun = 1;
	while (isRun)
	{
		cls();
		showMenu();
		int sel = getSelectMenu();

		double dNum0 = 0, dNum1 = 0;
		double result = 0;
		switch (sel)
		{
		case ADD:
			dNum0 = getDoubleNum();
			dNum1 = getDoubleNum();
			result = Add(dNum0, dNum1);
			printResult(result);
			break;
		case SUB:
			dNum0 = getDoubleNum();
			dNum1 = getDoubleNum();
			result = Sub(dNum0, dNum1);
			printResult(result);
			break;
		case MUL:
			dNum0 = getDoubleNum();
			dNum1 = getDoubleNum();
			result = Mul(dNum0, dNum1);
			printResult(result);
			break;
		case DIV:
			dNum0 = getDoubleNum();
			dNum1 = getDoubleNum();
			result = Div(dNum0, dNum1);
			printResult(result);
			break;
		case EXIT:
			isRun = 0;
			break;
		}

		getch();		// 키보드에 아무거나 입력될때까지 대기
	}
}

