#include <iostream>

using namespace std;

/*���ø��� Ư¡
�Ʒ�ó�� �Լ��� ����� �Լ��� �����Ϸ��� �ٷ� �ν����� ���Ѵ�.

Add<int>(10, 20) �̷��� ȣ���� �� T�� int�� ���ؼ� 
�Ʒ��� ���� �Լ��� �����Ϸ��� �����.
int Add(int a, int b)
{
	returne a+b;
}
��, ���ø� �Լ��� ������ �ִ� ���� �ƴ�
�ڷ����� ������ �� �ش� �ڷ����� �Լ��� ���� �޸𸮿� �ø��� �ȴ�.
	cout << Add<int>(10, 20) << endl;
	cout << Add<double>(3.14, 2.45) << endl;
	cout << Add<short>(10, 20) << endl;
	cout << Add<float>(3.14f, 2.45f) << endl;
	cout << Add<long>(9999, 10000) << endl;
�̷��� �ϸ� Add�Լ��� 5���� �޸𸮿� �����.
*/

/*T�� G�� �ڷ����� ����Ű�� �ܾ�� 1���� �̻� �ƹ����ڳ� ���ָ� �ȴ�.*/

template<typename T>
T Add(T a, T b)
{
	return a + b;
}

template<typename G>
G Sub(G a, G b)
{
	return a - b;
}

void main()
{
	cout << Add<int>(10, 20) << endl;
	cout << Add<double>(3.14, 2.45) << endl;
	cout << Add<short>(10, 20) << endl;
	cout << Add<float>(3.14f, 2.45f) << endl;
	cout << Add<long>(9999, 10000) << endl;

	/*�Ű����� ���� ���� �����Ϸ��� T�� ������ �� �����Ƿ� ������ �����ϴ�.*/
	cout << Add(10, 20) << endl;
	cout << Add(3.14, 2.45) << endl;
}