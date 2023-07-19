#include <iostream>

/* C : struct(������ ����) -> C++ : class(������+�Լ��� ����) -> New C++ : namespace
*  class�� ������ �׷�ȭ������ �� �о� �� �������� �ߺ��Ǵ� Ŭ�������� ���� �����.
*  ��ĥ �� ������ �߻��ߴ�.
*  �׷��� ���� �з� ������ namespace�� ���߿� C++������ �߰��Ͽ���.
*  java�� namespace�� package�� ��ȭ��Ű��,
*  C#�� namespace�� �״�� ����Ѵ�.
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