#include <iostream>

using namespace std;

/* C���� �Լ��� ã�� �� �Լ��̸����θ� ȣ���ߴ�.
*  C++�� �Լ��� ã�� �� �Լ��̸��� �Ű������� ���ļ� ȣ���Ѵ�.
*    �׷��Ƿ� ������ �̸��� �Ű������� �ٸ� �Լ��� ���� �� �ִ�.
*    => �Լ� �����ε�
*  Java, C#�� �Լ� �����ε� ������
*/

int Add(int num0, int num1) 
{
	return num0 + num1;
}

double Add(double num0, double num1)
{
	return num0 + num1;
}

void main()
{
	cout << Add(10, 20) << endl;
	cout << Add(3.14, 2.54) << endl;
}