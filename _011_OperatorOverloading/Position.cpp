#include "Position.h"
#include <iostream>

using namespace std;

Position::Position()
{
	x = 0;
	y = 0;
}

Position::Position(int x, int y)
{
	this->x = x;
	this->y = y;
}

Position::~Position()
{

}

void Position::ShowPosition()
{
	cout << "[x, y] = [" << x << ", " << y << "]" << endl;
}

Position& Position::operator++()
{
	// �̰�ó�� 1�� �����ϴ� ������ �����Ǵ� ����������
	++x, ++y;

	// �Ʒ�ó�� ++ �������� �ǹ̸� ������ �ٲٴ� �����Ǵ� �������� �ʴ´�.
	//x += 10;
	//y += 10;

	// �ڽ��� ��ü���� ��� ������ �� �ֵ��� �ڽ� ��ü�� �������� ����
	// ++++pos �̷��� ����� �� �ִ�.
	return *this;
}

Position Position::operator++(int)
{
	Position temp = *this;
	++x, ++y;
	return temp;
}

Position Position::operator+(Position pos)
{
	Position temp;
	temp.x = x + pos.x;
	temp.y = y + pos.y;
	return temp;
}

Position Position::operator+(int num)
{
	Position temp;
	temp.x = x + num;
	temp.y = y + num;
	return temp;
}

/*Position�� ����Լ��� �ƴ� �ܺ��� �����Լ��ε�
friend������ �����Ƿ� pos.xó�� private�����
������ �����Ӵ�.*/
Position operator+(int num, Position pos)
{
	Position temp;
	temp.x = num + pos.x;
	temp.y = num + pos.y;
	return temp;
}

Position& Position::operator<<(int num)
{
	printf("%d", num);
	return *this;
}

Position& Position::operator<<(float num)
{
	printf("%f", num);
	return *this;
}

Position& Position::operator<<(double num)
{
	printf("%lf", num);
	return *this;
}

Position& Position::operator<<(const char* num)
{
	printf("%s", num);
	return *this;
}

