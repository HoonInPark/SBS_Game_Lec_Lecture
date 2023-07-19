#pragma once

/*클래스의 선언부*/
class Point
{
private:
	int x;
	int y;

public:
	Point();				// 생성자(객체가 할당될 때 호출)
	Point(int _x, int _y);	// 생성자
	~Point();				// 소멸자(객체가 소멸될 때 호출)

public:
	void SetPoint(int _x, int _y);
	void AddPoint(Point& pt);
	void SubPoint(Point& pt);
	void MovePoint(int mx, int my);
	void ShowPoint();
};
