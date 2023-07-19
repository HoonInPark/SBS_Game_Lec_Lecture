#include <iostream>

/*아래처럼 std 네임스페이스에 있는 객체를 자주 사용할 때 std를 생략하고 싶다.
이럴 때 2가지 방법이 있다.*/
/*
void main()
{
	int num0, num1;
	std::cout << "2개의 정수 입력 " << std::endl;
	std::cin >> num0 >> num1;
	std::cout << num0 << "+" << num1 << "=" << num0 + num1 << std::endl;
}
*/

/*1번째 방법*/
/*
using std::cin;
using std::cout;
using std::endl;

void main()
{
	int num0, num1;
	cout << "2개의 정수 입력 " << endl;
	cin >> num0 >> num1;
	cout << num0 << "+" << num1 << "=" << num0 + num1 << endl;
}
*/

/*2번째 방법*/
// std 네임스페이스에 속한 모든 멤버들은 std를 생략하고 사용하겠다.
using namespace std;

void main()
{
	int num0, num1;
	cout << "2개의 정수 입력 " << endl;
	cin >> num0 >> num1;
	cout << num0 << "+" << num1 << "=" << num0 + num1 << endl;
}
