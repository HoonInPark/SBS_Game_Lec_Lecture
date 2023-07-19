#include "Developer.h"

Developer::Developer(string name="Developer", int age=1, 
					int nComputer=1, int nLanguage=1)
	: ComputerEngineer(name, age, nComputer)
{
	this->nLanguage = nLanguage;

	cout << "Developer ������ ȣ��" << endl;
}

Developer::~Developer()
{
	cout << "~Developer �Ҹ��� ȣ��" << endl;
}

void Developer::NeverEndingStudy()
{
	cout << this->name << "�� ��� �����Ѵ�" << endl;
}

void Developer::Sleep()
{
	cout << this->name << "�� �ʰ� �� ���� ���� �ִ�" << endl;
}

void Developer::Overtime()
{
	ComputerEngineer::Overtime();
	cout << this->name << "�ð��� ���� �ʿ��ϴ�" << endl;
}

void Developer::Info()
{
	ComputerEngineer::Info();
	cout << "��� ���α׷��� ��� �� : " << this->nLanguage << endl;
}

void Developer::Play()
{
	cout << "Developer::Play()" << endl;
}

void Developer::Pleasure()
{
	cout << "Developer::Pleasure()" << endl;
}
