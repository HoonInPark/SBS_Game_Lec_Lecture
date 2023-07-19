#pragma once

#include "ComputerEngineer.h"

class ServerAdministrator : public ComputerEngineer
{
protected:
	int nManagedComputer;

public:
	ServerAdministrator(string name, int age, int nComputer, int nManagedComputer);
	~ServerAdministrator();

public:
	void Work();	// ���� �Լ�
	void Info();	// Ȯ�� �Լ�

	void Play();
	virtual void Pleasure();
};