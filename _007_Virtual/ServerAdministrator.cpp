#include "ServerAdministrator.h"

ServerAdministrator::ServerAdministrator(string name="ServerAdministrator", 
				int age=1, int nComputer=1, int nManagedComputer=1)
	: ComputerEngineer(name, age, nComputer)
{
	this->nManagedComputer = nManagedComputer;

	cout << "ServerAdministrator 생성자 호출" << endl;
}

ServerAdministrator::~ServerAdministrator()
{
	cout << "~ServerAdministrator 소멸자 호출" << endl;
}

void ServerAdministrator::Work()
{
	cout << this->name << "은 종종 불시에 일하기" << endl;
}

void ServerAdministrator::Info()
{
	ComputerEngineer::Info();
	cout << "관리 컴퓨터 대수 : " << this->nManagedComputer << endl;
}

void ServerAdministrator::Play()
{
	cout << "ServerAdministrator::Play()" << endl;
}

void ServerAdministrator::Pleasure()
{
	cout << "ServerAdministrator::Pleasure()" << endl;
}