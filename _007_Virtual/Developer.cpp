#include "Developer.h"

Developer::Developer(string name="Developer", int age=1, 
					int nComputer=1, int nLanguage=1)
	: ComputerEngineer(name, age, nComputer)
{
	this->nLanguage = nLanguage;

	cout << "Developer 생성자 호출" << endl;
}

Developer::~Developer()
{
	cout << "~Developer 소멸자 호출" << endl;
}

void Developer::NeverEndingStudy()
{
	cout << this->name << "은 계속 공부한다" << endl;
}

void Developer::Sleep()
{
	cout << this->name << "은 늦게 잘 때가 종종 있다" << endl;
}

void Developer::Overtime()
{
	ComputerEngineer::Overtime();
	cout << this->name << "시간이 많이 필요하다" << endl;
}

void Developer::Info()
{
	ComputerEngineer::Info();
	cout << "사용 프로그래밍 언어 수 : " << this->nLanguage << endl;
}

void Developer::Play()
{
	cout << "Developer::Play()" << endl;
}

void Developer::Pleasure()
{
	cout << "Developer::Pleasure()" << endl;
}
