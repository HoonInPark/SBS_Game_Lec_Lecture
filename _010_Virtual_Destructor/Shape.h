#pragma once

#include <iostream>

using namespace std;

class Shape
{
public:
	Shape()
	{
		cout << "Shape() ������ ȣ��" << endl;
	}
	virtual ~Shape()
	{
		cout << "~Shape() �Ҹ��� ȣ��" << endl;
	}
	virtual void Draw() = 0;
};