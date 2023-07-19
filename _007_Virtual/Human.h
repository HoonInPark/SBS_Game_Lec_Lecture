#pragma once

/* C++의 캡슐화에서 접근권한은 2가지
* 1) private: 클래스 멤버만 다른 멤버를 접근가능
*             외부에서는 안됨
* 2) public:  모두 접근 가능
* 
* C++의 상속성에서 접근권한은 3가지
* protected : 자식 클래스가 생겼을 경우 부모의 멤버를 접근하게 해줌.
*             즉, 자식한테는 public처럼 동작
*             외부에는 private처럼 동작
*/

#include <iostream>

using namespace std;

class Human
{
protected:
	string name;
	int age;

public:
	Human(string name, int age);
	~Human();

public:
	void Eat();
	void Sleep();
	void Work();
	void Info();

	void Play();
	virtual void Pleasure();
};