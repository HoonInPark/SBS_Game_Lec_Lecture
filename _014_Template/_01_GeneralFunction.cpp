#include <iostream>

using namespace std;

/*아래 2개의 함수는 
1) 함수 이름 동일
2) 매개변수 갯수 동일
3) 즉 결과를 도출하는 논리 계산이 모두 동일

차이점은 매개변수의 자료형만 다르다.

=> 그렇다면 함수는 1개만 만들고, 매개변수의 자료형을 전달하는 문법을 만들면 어떨까?
  => 템플릿(Template) : 모양자
    => Java, C#에서는 Template을 Generic이라고 부른다.
*/
int Add(int a, int b)
{
	return a + b;
}
double Add(double a, double b)
{
	return a + b;
}
void main()
{
	cout << Add(10, 30) << endl;
	cout << Add(3.14, 2.47) << endl;
}