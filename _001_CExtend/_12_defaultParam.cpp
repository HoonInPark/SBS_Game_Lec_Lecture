#include <iostream>

using namespace std;
/*디폴트 매개변수
미리 자주 사용하는 디폴트 값을 부여하는 것
C는 이것이 안됨.
C++, C#은 된다.
*/
int Add(int num0=10, int num1=20)
{
	return num0 + num1;
}

void main()
{
	cout << Add() << endl;
	cout << Add(100, 200) << endl;
}