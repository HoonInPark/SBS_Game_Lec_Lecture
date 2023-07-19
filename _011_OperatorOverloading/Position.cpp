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
	// 이것처럼 1을 증가하는 연산자 재정의는 권장하지만
	++x, ++y;

	// 아래처럼 ++ 연산자의 의미를 완전히 바꾸는 재정의는 권장하지 않는다.
	//x += 10;
	//y += 10;

	// 자신의 객체값을 계속 증가할 수 있도록 자신 객체의 참조값을 리턴
	// ++++pos 이렇게 사용할 수 있다.
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

/*Position의 멤버함수가 아닌 외부의 전역함수인데
friend설정을 했으므로 pos.x처럼 private멤버의
접근이 자유롭다.*/
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

