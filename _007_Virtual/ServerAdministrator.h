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
	void Work();	// 수정 함수
	void Info();	// 확장 함수

	void Play();
	virtual void Pleasure();
};