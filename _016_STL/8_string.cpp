//8. 문자열 추출 및 병합

#include <iostream>
#include <string>

using namespace std;

void main()
{
	string s0("I have money");
	string s1("You need a dream");
	string s2;

	s2 = s0.substr(0, 7);	// 0번째부터 7글자 추출
	s2.append(s1, 9, 7);	// 10변째부터 7글자 s2에 붙임
	s2.append(3, '!');
	s2 += "\n"; // operator+=() 연산자 오버로딩 함수가 string 클래스 내에 있다.

	cout << s2;
}