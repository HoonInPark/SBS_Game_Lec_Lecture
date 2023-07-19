#pragma once

#include "Human.h"

/*
C++의 상속은 public, protected, private 상속 3가지이다.
하지만 거의 99%이상 public 상속만 사용한다.
MFC 프레임워크같은 예전 프레임워크는 다른 상속을 사용하는 경우도 있지만
객체지향 전문가들은 public상속으로만 해도 무방하다는 견해를 보인다.
다른 상속은 오히려 설계를 복잡하게 한다는 의견을 내고 있다.
그래서 JAVA, C#은 public상속만을 제공한다.
*/

class ComputerEngineer : public Human
{
protected:
	int nComputer;	// 컴퓨터 업무 보유 대수
	
public:
	ComputerEngineer(string name, int age, int nComputer);
	~ComputerEngineer();

public:
	void Overtime();	// 새로 추가
	void Info();		// 기능 덧붙임
};