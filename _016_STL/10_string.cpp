#include <iostream>
#include <string>
using namespace std;

void main()
{
	string str("Hi! How are you?");
	string punctuation("!?.,"); // 이 글자가 있을 경우, 삭제

	size_t found = str.find_first_of(punctuation);
	while(found != string::npos)
	{
		// 찾은 문자 삭제
		str.erase(found, 1);
		found = str.find_first_of(punctuation, found);

		// 찾은 문자 2번 삽입
		/*str.insert(found, 2, str[found]);
		found = str.find_first_of(punctuation, found+3);*/
	}
	cout << str << endl;
}