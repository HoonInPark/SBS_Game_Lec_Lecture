#include <iostream>
#include <string>
using namespace std;

void main()
{
	string str("Hi! How are you?");

	cout << "String length: " << str.length() << endl;
	printf("%s\n", str.c_str()); // const char*는 문자열의 시작주소를 리턴한다.

	str.clear();
	if(str.empty())
	{
		cout << "Now string is empty." << endl;
		cout << "String length: " << str.length() << endl;
	}
}