#pragma once

#define INTERFACE		class
#define AClass			class

/* C++때는 INTERFACE라는 공식적인 키워드가 없었다.
* 단, 객체지향 설계에서는 INTERFACE라는 단어를 사용했다.
* 아래처럼 virtual함수에 = 0; 이렇게 하면 
* 컴파일러는 이것을 '순수 가상 함수'로 인식한다.
* 순수 가상 함수란 구현부는 없는 상태로
* 상속을 전제로 한 가상함수란 뜻이라.
* 
* 그러므로 아래 ICar는 구현부가 없으므로 객체를 생성하지 못하고
* 상속하기 위한 약속이다.
* 순수 가상 함수를 다른 말로 추상(abstract) 함수, 인터페이스 함수라고 부른다
* (Java, C#)에서
* 
* C++에서는 명시적으로 public 권한으로 접근할 수 있게 해야 한다.
* Java/C#은 자동 public
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