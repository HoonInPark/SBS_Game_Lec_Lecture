#include <iostream>

using namespace std;

// 클래스의 선언부(헤더파일, *.h, hpp)
class Point
{
public:
	int x, y;

	void ShowPoint();
};

// 클래스의 구현부(소스파일, *.cpp)
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