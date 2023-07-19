#include "Human.h"

Human::Human(string name="Human", int age=1)
{
	this->name = name;
	this->age = age;
	cout << "Human 생성자 호출" << endl;
}

Human::~Human()
{
	cout << "~Human 소멸자 호출" << endl;
}

void Human::Eat()
{
	cout << this->name << "이 밥을 먹는다" << endl;
}

void Human::Sleep()
{
	cout << this->name << "이 잠을 잔다" << endl;
}

void Human::Work()
{
	cout << this->name << "이 일을 한다" << endl;
}

void Human::Info()
{
	cout << "이름 : " << this->name << endl;
	cout << "나이 : " << this->age << endl;
}

void Human::Play()
{
	cout << "Human::Play()" << endl;
}

void Human::Pleasure()
{
	cout << "Human::Pleasure()" << endl;
}