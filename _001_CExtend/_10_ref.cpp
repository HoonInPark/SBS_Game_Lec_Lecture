#include <iostream>

using namespace std;

void main()
{
	int num = 100;
	int& rNum = num;
	cout << rNum << endl;

	/*참조변수는 처음부터 초기화(다른 변수를 가리켜야 함)*/
	int& rNum1;
	rNum1 = num;
	cout << rNum1 << endl;	

}