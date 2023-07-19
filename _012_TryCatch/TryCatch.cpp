/*예외처리
C언어에서는 함수의 리턴값으로 성공/실패를 확인하였다.
그러나 함수 1개 호출마다 에러 처리를 if문으로 하다보니
정작 로직 실행 처리보다 에러 처리 구문이 훨씬 많아 졌다.
result = function1();
if(result) 처리
result = function2();
if(result) 처리
result = function3();
if(result) 처리
또 로직 실행구문과 에러 처리구문이 함께 사용되어
코드의 가독성이 많이 떨어졌다.
이에 C++에서는 에러를 처리하는 새로운 문법을 도입했는데
이것이 예외처리이다.
try
{
	// 로직 실행 구문
}
catch()
{
	// 에러 처리 구문
}
이렇게 영역을 구분함으로써 코드의 가독성을 확보하였고
공통된 에러에 대해 일괄적/일관성있는 에러 처리가 가능하게 되었다.
*/

#include <iostream>

using namespace std;

void Divide(double dividend, double divider, double& result)
{
	if (divider == 0)
		throw false;		// bool형 값으로 예외를 던진다.

	result = dividend / divider;
}

void main()
{
	double num1, num2, result;

	cout << "A/B를 연산할 2개의 수 입력: ";
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