#include "Point.h"
#include <iostream>

using namespace std;

Point::Point()
{
	cout << "Point() 생성자 호출" << endl;
	SetPoint(0, 0);
}

Point::Point(int _x, int _y)
{
	cout << "Point(int _x, int _y) 생성자 호출" << endl;
	SetPoint(_x, _y);
}

Point::~Point()
{
	cout << "~Point() 소멸자 호출" << endl;
}

void Point::SetPoint(int _x, int _y)
{
	x = _x;
	y = _y;
}

void Point::AddPoint(Point& pt)
{
	x += pt.x;
	y += pt.y;
}

void Point::SubPoint(Point& pt)
{
	x -= pt.x;
	y -= pt.y;
}

void Point::MovePoint(int mx, int my)
{
	x += mx;
	y += my;
}

void Point::ShowPoint()
{
	cout << "x:" << x << ", y:" << y << endl;
}
