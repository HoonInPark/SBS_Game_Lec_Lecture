#include "ComputerEngineer.h"

/* 상속받은 자식 객체 내부에는 부모 객체가 포함된다.
* 그러므로 부모 객체가 먼저 생성된 후 자식 객체의 구현 부분이 만들어지므로
* 부모 생성자 호출 후 자식 생성자 호출이 이루어진다.
* 
* 자식 생성자에서 부모 생성자의 초기화를 하려면
* 멤버 이니셜라이즈 영역에 부모 생성자 초기화를 한다.
*/
ComputerEngineer::ComputerEngineer
	(string name="ComputerEnginner", int age=1, int nComputer=1)
	: Human(name, age)
{
	this->nComputer = nComputer;

	cout << "ComputerEngineer 생성자 호출" << endl;
}

ComputerEngineer::~ComputerEngineer()
{
	cout << "~ComputerEngineer 소멸자 호출" << endl;
}


void ComputerEngineer::Overtime()
{
	cout << this->name << "은 야근을 종종한다" << endl;
}

void ComputerEngineer::Info()
{
	Human::Info();
	cout << "사용 컴퓨터 : " << this->nComputer << "대" << endl;
}
