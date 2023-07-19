#pragma once

#define endline		"\n"

class Position
{
private:
	int x, y;

public:
	Position();
	Position(int x, int y);
	~Position();

public:
	void ShowPosition();

	/*������ �����ε�
	C++������ �������� ����� �Լ��� ����ؼ� 
	������ �� �� �ִ�.
	���� ��� << �����ڴ� 
	���� C������ ��Ʈ�� ���� �������� �̵��϶�� �ǹ��ε�
	C++�� iostream���� �������ؼ� ���� �����ϴ� �ǹ̷� Ȯ��Ǿ���.
	��, �տ� ������ ���� << �� ��Ʈ�� �̵��ϴ� ������ �ǹ��̰�
	�տ� iostream ��ü�� ���� << �� iostream���� operator<<()�Լ���
	�������� �Լ��� ȣ���ϰ� �ȴ�.
	������ �����ε��� �������� ��ȣ�� �ǹ̸� �����ؼ� �������� ���α׷�����
	�����ϰ� �Ѵ�.
	C++, C#�� ������ �����ε��� �����ϰ�
	Java�� ������ �����ε��� �������� �ʴ´�.
	*/
	Position& operator++();		// ��������������
	Position operator++(int);	// ��������������
	Position operator+(Position pos);  // pos1 + pos2;
	Position operator+(int num);	// pos1 + num;
	/*friend�� �ܺ��� �����Լ���
	Position Ŭ������ private����� �����Ӱ� ������ �� �ֵ��� �ϴ� ����
	�ش� �Լ��� ģ���� ������ private����� �����Ӱ� �����Ѵ�.
	��ü������ ��Ģ�� ����Ǵ� �����̶� ����� �ִ�.
	*/
	friend Position operator+(int num, Position pos);	// 10 + pos;

	Position& operator<<(int num);
	Position& operator<<(float num);
	Position& operator<<(double num);
	Position& operator<<(const char* num);
};