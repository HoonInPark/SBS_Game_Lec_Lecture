#pragma once

/*Ŭ������ �����*/
class Point
{
private:
	int x;
	int y;

public:
	Point();				// ������(��ü�� �Ҵ�� �� ȣ��)
	Point(int _x, int _y);	// ������
	~Point();				// �Ҹ���(��ü�� �Ҹ�� �� ȣ��)

public:
	void SetPoint(int _x, int _y);
	void AddPoint(Point& pt);
	void SubPoint(Point& pt);
	void MovePoint(int mx, int my);
	void ShowPoint();
};
