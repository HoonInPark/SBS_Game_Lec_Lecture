#include "Human.h"

Human::Human(string name="Human", int age=1)
{
	this->name = name;
	this->age = age;
	cout << "Human ������ ȣ��" << endl;
}

Human::~Human()
{
	cout << "~Human �Ҹ��� ȣ��" << endl;
}

void Human::Eat()
{
	cout << this->name << "�� ���� �Դ´�" << endl;
}

void Human::Sleep()
{
	cout << this->name << "�� ���� �ܴ�" << endl;
}

void Human::Work()
{
	cout << this->name << "�� ���� �Ѵ�" << endl;
}

void Human::Info()
{
	cout << "�̸� : " << this->name << endl;
	cout << "���� : " << this->age << endl;
}

void Human::Play()
{
	cout << "Human::Play()" << endl;
}

void Human::Pleasure()
{
	cout << "Human::Pleasure()" << endl;
}