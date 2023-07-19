#include <iostream>

using namespace std;

#define ARR_NUM		5

/* C언어에서는 동적할당 할 때 malloc/free 함수를 사용했는데
*  C++에서는 워낙 자주 사용하다보니 아예 컴파일러에 연산자로 내장하였다.
*     그래서 new/delete 연산자를 사용한다.
*/

void main()
{
	/*스택의 num에는 5개 int배열의 시작주소
	  힙에는 5개 int배열의 공간이 할당됨*/
	int* num = new int[ARR_NUM];
	for (int i = 0;i < ARR_NUM;i++)
		num[i] = i * 10;
	for (int i = 0;i < ARR_NUM;i++)
		cout << num[i] << ", ";
	cout << endl;

	/*C++에서는 new로 할당했으면 반드시 delete하는 습관을 가져야 한다*/
	delete[] num;
}