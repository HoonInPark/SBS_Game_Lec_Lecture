#include "Position.h"

void main()
{
	Position pos(10, 20);
	pos.ShowPosition();

	++pos;		// pos.operator++();
	pos.ShowPosition();

	// (pos.operator++()).operator++();
	/*
	* temp�� pos�� ����Ű�� ���������̹Ƿ�
	* ++++pos�� �ϸ� �Ʒ��� ���� ������ �̷������.
	* Position& temp = pos.operator++();
	* temp.operator++();
	*/

	++++pos;	
	pos.ShowPosition();

	++++++++++++++++++++++++pos;
	pos.ShowPosition();

	/* ���� ���� �����ڴ� �Ʒ�ó�� ����� ���� ����.
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
	print << "ȫ�浿" << endline << "�Ӳ���" << endline << "����" << endline;

}