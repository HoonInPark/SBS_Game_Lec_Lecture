/*����ó��
C������ �Լ��� ���ϰ����� ����/���и� Ȯ���Ͽ���.
�׷��� �Լ� 1�� ȣ�⸶�� ���� ó���� if������ �ϴٺ���
���� ���� ���� ó������ ���� ó�� ������ �ξ� ���� ����.
result = function1();
if(result) ó��
result = function2();
if(result) ó��
result = function3();
if(result) ó��
�� ���� ���౸���� ���� ó�������� �Բ� ���Ǿ�
�ڵ��� �������� ���� ��������.
�̿� C++������ ������ ó���ϴ� ���ο� ������ �����ߴµ�
�̰��� ����ó���̴�.
try
{
	// ���� ���� ����
}
catch()
{
	// ���� ó�� ����
}
�̷��� ������ ���������ν� �ڵ��� �������� Ȯ���Ͽ���
����� ������ ���� �ϰ���/�ϰ����ִ� ���� ó���� �����ϰ� �Ǿ���.
*/

#include <iostream>

using namespace std;

void Divide(double dividend, double divider, double& result)
{
	if (divider == 0)
		throw false;		// bool�� ������ ���ܸ� ������.

	result = dividend / divider;
}

void main()
{
	double num1, num2, result;

	cout << "A/B�� ������ 2���� �� �Է�: ";
	cin >> num1 >> num2;

	try
	{
		Divide(num1, num2, result);
		cout << num1 << "/" << num2 << "=" << result << endl;
	}
	catch (bool val)
	{
		cout << "Invalid Value!!!" << endl;
	}
}