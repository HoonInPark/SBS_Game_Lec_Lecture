#include <iostream>

using namespace std;
/*����Ʈ �Ű�����
�̸� ���� ����ϴ� ����Ʈ ���� �ο��ϴ� ��
C�� �̰��� �ȵ�.
C++, C#�� �ȴ�.
*/
int Add(int num0=10, int num1=20)
{
	return num0 + num1;
}

void main()
{
	cout << Add() << endl;
	cout << Add(100, 200) << endl;
}