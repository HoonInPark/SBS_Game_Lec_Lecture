#include "Position.h"

void main()
{
	Position pos(10, 20);
	pos.ShowPosition();

	++pos;		// pos.operator++();
	pos.ShowPosition();

	// (pos.operator++()).operator++();
	/*
	* temp는 pos를 가리키는 참조변수이므로
	* ++++pos를 하면 아래와 같은 연산이 이루어진다.
	* Position& temp = pos.operator++();
	* temp.operator++();
	*/

	++++pos;	
	pos.ShowPosition();

	++++++++++++++++++++++++pos;
	pos.ShowPosition();

	/* 후위 증가 연산자는 아래처럼 사용할 수는 없다.
	pos++++
	*/
	pos++.ShowPosition();
	pos.ShowPosition();

	Position pos1(5, 5), pos2(7, 7);
	// pos1.operator+(pos2);
	Position result = pos1 + pos2;
	result.ShowPosition();

	Position pos3(20, 20);
	//pos3.operator+(4)
	result = pos3 + 4;
	result.ShowPosition();

	// 4 + pos;
	// 4.operator+(pos);

	Position pos4(100, 50);
	// operator+(99, pos4);
	result = 99 + pos4;
	result.ShowPosition();

	Position print;
	print << 10 << endline;
	print << 3.14 << endline;
	print << 20 << " " << 30 << " " << endline;
	print << "홍길동" << endline << "임꺽정" << endline << "장길산" << endline;

}