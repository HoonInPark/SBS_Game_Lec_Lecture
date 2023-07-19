#include <iostream>
#include "Exception.h"

using namespace std;

void Divide(double dividend, double divider, double& result)
{
	if (divider == 0)
		throw Exception("Divide()", __LINE__);

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
	catch (Exception& e)
	{
		cout << "Exception : " << e.GetName() << ", Line : " << e.GetLine() << endl;
	}
}