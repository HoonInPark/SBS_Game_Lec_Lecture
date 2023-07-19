#pragma once

#define INTERFACE		class
#define AClass			class

/* C++���� INTERFACE��� �������� Ű���尡 ������.
* ��, ��ü���� ���迡���� INTERFACE��� �ܾ ����ߴ�.
* �Ʒ�ó�� virtual�Լ��� = 0; �̷��� �ϸ� 
* �����Ϸ��� �̰��� '���� ���� �Լ�'�� �ν��Ѵ�.
* ���� ���� �Լ��� �����δ� ���� ���·�
* ����� ������ �� �����Լ��� ���̶�.
* 
* �׷��Ƿ� �Ʒ� ICar�� �����ΰ� �����Ƿ� ��ü�� �������� ���ϰ�
* ����ϱ� ���� ����̴�.
* ���� ���� �Լ��� �ٸ� ���� �߻�(abstract) �Լ�, �������̽� �Լ���� �θ���
* (Java, C#)����
* 
* C++������ ��������� public �������� ������ �� �ְ� �ؾ� �Ѵ�.
* Java/C#�� �ڵ� public
*/

INTERFACE ICar
{
public:
	virtual void Driver() = 0;
	virtual void Accel() = 0;
	virtual void Break() = 0;
};

#include <iostream>

using namespace std;

AClass ACar : ICar
{
private:
	string name = "Car";

public:
	void SetName(string name)
	{
		this->name = name;
	}
	string GetName()
	{
		return name;
	}

public:
	virtual void Driver() = 0;
	virtual void Accel() = 0;
	virtual void Break() = 0;
};