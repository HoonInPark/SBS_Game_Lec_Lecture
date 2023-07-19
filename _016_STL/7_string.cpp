// 문자열 생성

#include <iostream>
#include <string>

using namespace std;

void main()
{
	string s0("C++ string");
	string s1(s0); // 복사생성자를 통해 s1을 생성한다.
	string s2(s0, 1, 3);
	string s3(10, 'x');

	cout << s0 << endl;
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
}