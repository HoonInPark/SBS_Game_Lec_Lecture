//8. ���ڿ� ���� �� ����

#include <iostream>
#include <string>

using namespace std;

void main()
{
	string s0("I have money");
	string s1("You need a dream");
	string s2;

	s2 = s0.substr(0, 7);	// 0��°���� 7���� ����
	s2.append(s1, 9, 7);	// 10��°���� 7���� s2�� ����
	s2.append(3, '!');
	s2 += "\n"; // operator+=() ������ �����ε� �Լ��� string Ŭ���� ���� �ִ�.

	cout << s2;
}