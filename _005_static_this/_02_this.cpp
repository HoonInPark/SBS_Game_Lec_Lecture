#include <iostream>

using namespace std;

class Point
{
public:
	// ��� ���� (�ʵ�)
	// ��ü���� ������ ����
	int x, y;
public:
	// ��� �Լ� (�޼���)
	/*ù��° ��ü�� ������ �� Ŭ������ �Լ��� �޸𸮿� �ö󰡰�
	�ι�° ��ü ���ķδ� Ŭ������ �Լ��� �����ؼ� ����Ѵ�.
	
	�̶� ����Լ��� 1���̰� ��ü�� �������� �� ����Լ����� �����ϴ�
	��������� �����Ҽ����� �������ִ� ���� �ʿ��ϴ�.
	�׷��� �����Ϸ��� ����Լ��� �������� �� ù��° �Ű�������
	�ش�Ǵ� ��ü�� ���޹��� this������ ������ �߰��Ѵ�.
	�� this�� ����Լ��� ȣ���ϴ� ��ü�� �ּҰ� ��������Ƿ�
	�� this�� ���ؼ� � ��ü �Ҽ��� ����������� ������ �����ϴ�.
	�׷��� �Ű������� Point* this�� ���� �Ű������� ������ �ʾƵ�
	�츮�� ����Լ����� this->x�̷��� ����� �� �ִ�.
	this�� ������ �ִ�.
	*/
	void SetPoint(int x, int y)
	{
		/*this->x �� ��ü�� �Ҽӵ� ������� x�� �ǹ��Ѵ�.
		this�� �������������� ����ó�� �Ű������� x�� ����
		x = x; ó�� �ڵ��ϸ� �켱������ ���������� �����Ƿ�
		���������� ������������ �����ϹǷ� ������� x�ʹ� ������ ���� �ȴ�.
		�׷��Ƿ� ��������� ������ �̸��� �Ű������� ���� ����
		�ݵ�� this->x = x;ó�� �ؾ� �Ѵ�.
		*/
		this->x = x;
		this->y = y;
	}
	void ShowPoint()
	{
		cout << "x:" << this->x << ", y:" << this->y << endl;
	}
	void PrintThis()
	{
		cout << "this:" << this << endl;
	}
};

/* C����� �Լ��� C++������ �����Լ���� �Ѵ�.
* ���� C������ �׳� �Լ���� �ҷ�����
* C++������ Ŭ���� ������ �Լ��� ������ ��Ī�� �ʿ��Ͽ���
* �׷��� �Ϲ� �Լ��� �����Լ���� ��Ī�Ѵ�.
*/
void ShowPoint(Point* pt)
{
	cout << "x:" << pt->x << ", y:" << pt->y << endl;
}

void main()
{
	Point pt0, pt1, pt2;
	pt0.SetPoint(10, 20);   // SetPoint(Point* this, int x, int y)
	pt1.SetPoint(100, 200);
	pt2.SetPoint(123, 456);
	pt0.ShowPoint();		// ShowPoint(Point* this) // ShowPoint(&pt0);
	pt1.ShowPoint();		// ShowPoint(&pt1);
	cout << "----------------------------" << endl;
	ShowPoint(&pt0);
	ShowPoint(&pt1);
	ShowPoint(&pt2);
	cout << "----------------------------" << endl;
	cout << "&pt0:" << &pt0 << endl;
	pt0.PrintThis();
	cout << "&pt1:" << &pt1 << endl;
	pt1.PrintThis();
	cout << "&pt2:" << &pt2 << endl;
	pt2.PrintThis();
}