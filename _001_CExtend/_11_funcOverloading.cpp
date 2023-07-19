#include <iostream>

using namespace std;

/* C언어때는 함수를 찾을 때 함수이름으로만 호출했다.
*  C++은 함수를 찾을 때 함수이름과 매개변수를 합쳐서 호출한다.
*    그러므로 동일한 이름의 매개변수가 다른 함수를 만들 수 있다.
*    => 함수 오버로딩
*  Java, C#은 함수 오버로딩 지원함
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