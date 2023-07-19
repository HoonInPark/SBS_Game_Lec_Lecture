#include "ServerAdministrator.h"

ServerAdministrator::ServerAdministrator(string name="ServerAdministrator", 
				int age=1, int nComputer=1, int nManagedComputer=1)
	: ComputerEngineer(name, age, nComputer)
{
	this->nManagedComputer = nManagedComputer;

	cout << "ServerAdministrator ������ ȣ��" << endl;
}

ServerAdministrator::~ServerAdministrator()
{
	cout << "~ServerAdministrator �Ҹ��� ȣ��" << endl;
}

void ServerAdministrator::Work()
{
	cout << this->name << "�� ���� �ҽÿ� ���ϱ�" << endl;
}

void ServerAdministrator::Info()
{
	ComputerEngineer::Info();
	cout << "���� ��ǻ�� ��� : " << this->nManagedComputer << endl;
}

void ServerAdministrator::Play()
{
	cout << "ServerAdministrator::Play()" << endl;
}

void ServerAdministrator::Pleasure()
{
	cout << "ServerAdministrator::Pleasure()" << endl;
}