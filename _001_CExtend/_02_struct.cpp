#include <iostream>

/* C������ ����ü�� �������� ����
*  C++������ ����ü�� ������ + �Լ����� �������� Ȯ��Ǿ���.
*/
struct Point
{
	int x;
	int y;

	void ShowPoint()
	{
		printf("%d, %d\n", x, y);
	}
};

void main()
{
	Point pt = { 10, 20 };
	pt.ShowPoint();
}