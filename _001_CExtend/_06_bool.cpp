#include <iostream>

using namespace std;

/* C������ ��������� ���������� ȥ���ؼ� ����ߴ�.
*  C++������ �̰��� ������ �ʿ並 ������ ��/������ �����ϴ� bool���� �߰��Ͽ���.
*  ������, C++�� C������ ȣȯ�� ��å�� �������Ƿ�, C����� ��� �ڵ尡
*  �״�� C++���� �����ϱ⸦ �ٷ���.
*  �׷��ٺ��� bool�� ��������� ���α׷��ӵ��� �̹� �ͼ��� C����� �����ϰ�
*  while(1)�� ���� C������ ��� ���� �ְ� �Ǿ���.
* 
*  java������ C++�� �̷��� �ָ����� ����/������ ���ռ��� ��ģ�ٰ� �Ǵ��Ͽ�
*  ������ ������� �������� ������ �����ߴ�.
*  C#�� �� �κ��� java�� �����ϴ�.
*  �׷��� C, C++�� while(1)�� �ߵ�����
*  java, C#�� �ݵ�� while(true)�� �ؾ� �Ѵ�.
*/
void main()
{
	int num = 0;
	cout << "���� �Է� : ";
	cin >> num;

	bool b = num > 0;
	if (b)
		cout << num << "�� 0���� Ů�ϴ�" << endl;
	else
		cout << num << "�� 0�̰ų� �۽��ϴ�" << endl;

	cout << "sizeof(bool) : " << sizeof(bool) << endl;

	b = true;
	cout << b << endl;
	b = false;
	cout << b << endl;
}