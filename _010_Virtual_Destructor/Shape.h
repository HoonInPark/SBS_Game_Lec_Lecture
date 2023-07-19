#pragma once

#include <iostream>

using namespace std;

class Shape
{
public:
	Shape()
	{
		cout << "Shape() 생성자 호출" << endl;
	}
	virtual ~Shape()
	{
		cout << "~Shape() 소멸자 호출" << endl;
	}
	virtual void Draw() = 0;
};