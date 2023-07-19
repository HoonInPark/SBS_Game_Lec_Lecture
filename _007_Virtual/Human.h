#pragma once

/* C++�� ĸ��ȭ���� ���ٱ����� 2����
* 1) private: Ŭ���� ����� �ٸ� ����� ���ٰ���
*             �ܺο����� �ȵ�
* 2) public:  ��� ���� ����
* 
* C++�� ��Ӽ����� ���ٱ����� 3����
* protected : �ڽ� Ŭ������ ������ ��� �θ��� ����� �����ϰ� ����.
*             ��, �ڽ����״� publicó�� ����
*             �ܺο��� privateó�� ����
*/

#include <iostream>

using namespace std;

class Human
{
protected:
	string name;
	int age;

public:
	Human(string name, int age);
	~Human();

public:
	void Eat();
	void Sleep();
	void Work();
	void Info();

	void Play();
	virtual void Pleasure();
};