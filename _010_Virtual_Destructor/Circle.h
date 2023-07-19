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
		int len = strlen(name);		// name의 길이
		m_strName = new char[len+1]; // name의 길이 + 널값크기(1)
		memset(m_strName, 0, len+1); // 할당한 공간을 모두 0으로 초기화
		strncpy_s(m_strName, len+1, name, len); // name에서 len만큼 복사

		cout << "Circle(const char* name) 생성자 호출" << endl;
	}
	virtual ~Circle()
	{
		delete[] m_strName;

		cout << "~Circle() 소멸자 호출" << endl;
	}
	void Draw()
	{
		cout << "원을 그렸다" << endl;
	}
};