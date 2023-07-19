#include <iostream>

using namespace std;

/* C에서는 산술형값과 논리형값을 혼재해서 사용했다.
*  C++에서는 이것의 구분의 필요를 느껴서 참/거짓을 저장하는 bool형을 추가하였다.
*  하지만, C++은 C언어와의 호환성 정책을 택했으므로, C언어의 모든 코드가
*  그대로 C++에서 동작하기를 바랬다.
*  그러다보니 bool을 만들었지만 프로그래머들은 이미 익숙한 C방식을 유지하고
*  while(1)과 같은 C형식이 계속 남아 있게 되었다.
* 
*  java에서는 C++의 이러한 애매함이 설계/논리의 정합성을 해친다고 판단하여
*  엄격한 산술형과 논리형의 구분을 선택했다.
*  C#도 이 부분은 java와 동일하다.
*  그래서 C, C++은 while(1)이 잘되지만
*  java, C#은 반드시 while(true)로 해야 한다.
*/
void main()
{
	int num = 0;
	cout << "정수 입력 : ";
	cin >> num;

	bool b = num > 0;
	if (b)
		cout << num << "은 0보다 큽니다" << endl;
	else
		cout << num << "은 0이거나 작습니다" << endl;

	cout << "sizeof(bool) : " << sizeof(bool) << endl;

	b = true;
	cout << b << endl;
	b = false;
	cout << b << endl;
}