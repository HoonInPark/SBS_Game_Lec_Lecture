#include <iostream>

using namespace std;

// Ŭ������ �����(�������, *.h, hpp)
class Point
{
public:
	int x, y;

	void ShowPoint();
};

// Ŭ������ ������(�ҽ�����, *.cpp)
void Point::ShowPoint()
{
	cout << "x:" << x << ", y:" << y << endl;
}

void main()
{
	Point pt;

	pt.x = 100;
	pt.y = 200;
	pt.ShowPoint();
}