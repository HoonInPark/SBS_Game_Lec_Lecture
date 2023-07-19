#pragma once

#include "Shape.h"
#include "iostream"

using namespace std;

class Circle : public Shape
{
private:
	char* m_strName;

public:
	Circle(const char* name) 
	{
		int len = strlen(name);		// name�� ����
		m_strName = new char[len+1]; // name�� ���� + �ΰ�ũ��(1)
		memset(m_strName, 0, len+1); // �Ҵ��� ������ ��� 0���� �ʱ�ȭ
		strncpy_s(m_strName, len+1, name, len); // name���� len��ŭ ����

		cout << "Circle(const char* name) ������ ȣ��" << endl;
	}
	virtual ~Circle()
	{
		delete[] m_strName;

		cout << "~Circle() �Ҹ��� ȣ��" << endl;
	}
	void Draw()
	{
		cout << "���� �׷ȴ�" << endl;
	}
};