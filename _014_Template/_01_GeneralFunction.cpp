#include <iostream>

using namespace std;

/*�Ʒ� 2���� �Լ��� 
1) �Լ� �̸� ����
2) �Ű����� ���� ����
3) �� ����� �����ϴ� �� ����� ��� ����

�������� �Ű������� �ڷ����� �ٸ���.

=> �׷��ٸ� �Լ��� 1���� �����, �Ű������� �ڷ����� �����ϴ� ������ ����� ���?
  => ���ø�(Template) : �����
    => Java, C#������ Template�� Generic�̶�� �θ���.
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