#pragma once

#include "ComputerEngineer.h"

class Developer : public ComputerEngineer
{
protected:
	int nLanguage;		// ����ϴ� ����� ��

public:
	Developer(string name, int age, int nComputer, int nLanguage);
	~Developer();

public:
	void NeverEndingStudy();	// ���� �߰��� �Լ�
	void Sleep();				// ���� ��� ����
	void Overtime();			// ���� ��� Ȯ��
	void Info();				// ���� ��� Ȯ��
};