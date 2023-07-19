#include <iostream>

/* C : struct(변수들 집합) -> C++ : class(변수들+함수들 집합) -> New C++ : namespace
*  class만 가지고 그룹화시켰을 때 분업 시 생각보다 중복되는 클래스명이 많이 생겼다.
*  합칠 때 문제가 발생했다.
*  그래서 상위 분류 개념은 namespace를 나중에 C++문법에 추가하였다.
*  java는 namespace를 package로 변화시키고,
*  C#은 namespace를 그대로 사용한다.
*/

namespace A 
{
	int num0, num1;

	int Sum()
	{
		return num0 + num1;
	}
}
namespace B
{
	float num0, num1;

	float Sum()
	{
		return num0 + num1;
	}
}

void main()
{
	A::num0 = 100, A::num1 = 200;
	std::cout << A::Sum() << std::endl;

	B::num0 = 3.14f, B::num1 = 2.5f;
	std::cout << B::Sum() << std::endl;
}