#include <iostream>
#include <string>
using namespace std;

void main()
{
	string str("Hi! How are you?");
	string punctuation("!?.,"); // �� ���ڰ� ���� ���, ����

	size_t found = str.find_first_of(punctuation);
	while(found != string::npos)
	{
		// ã�� ���� ����
		str.erase(found, 1);
		found = str.find_first_of(punctuation, found);

		// ã�� ���� 2�� ����
		/*str.insert(found, 2, str[found]);
		found = str.find_first_of(punctuation, found+3);*/
	}
	cout << str << endl;
}