#include <iostream>

/* C언어에서 << 는 비트시프트 연산자(해당 값을 해당 위치만큼 비트 이동하는 연산자)였는데
*  C++에서는 연산자의 의미를 재정의할 수 있다.(연산자 오버로딩)
*           연산자를 함수처럼 사용가능하다.
*           java는 이런 기능이 없고
*           C#은 연산자 오버로딩이 있다.
*/
void main()
{
	int num0, num1;
	std::cout << "정수 2개 입력 : " << std::endl;  // '\n'
	std::cin >> num0 >> num1;
	std::cout << num0 << " + " << num1 << " = " << num0 + num1 << std::endl;
}