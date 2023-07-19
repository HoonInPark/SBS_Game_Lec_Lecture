#pragma once

#include "Human.h"

/*
C++�� ����� public, protected, private ��� 3�����̴�.
������ ���� 99%�̻� public ��Ӹ� ����Ѵ�.
MFC �����ӿ�ũ���� ���� �����ӿ�ũ�� �ٸ� ����� ����ϴ� ��쵵 ������
��ü���� ���������� public������θ� �ص� �����ϴٴ� ���ظ� ���δ�.
�ٸ� ����� ������ ���踦 �����ϰ� �Ѵٴ� �ǰ��� ���� �ִ�.
�׷��� JAVA, C#�� public��Ӹ��� �����Ѵ�.
*/

class ComputerEngineer : public Human
{
protected:
	int nComputer;	// ��ǻ�� ���� ���� ���
	
public:
	ComputerEngineer(string name, int age, int nComputer);
	~ComputerEngineer();

public:
	void Overtime();	// ���� �߰�
	void Info();		// ��� ������
};