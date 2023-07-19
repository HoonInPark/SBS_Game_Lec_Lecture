#include "Human.h"
#include "ComputerEngineer.h"
#include "Developer.h"
#include "ServerAdministrator.h"

void main()
{
	/*
	Human hong("홍길동", 24);
	hong.Eat();
	hong.Sleep();
	hong.Work();
	hong.Info();
	*/
	/*
	ComputerEngineer comEng("임꺽정", 33, 3);
	comEng.Eat();
	comEng.Sleep();
	comEng.Work();
	comEng.Overtime();
	comEng.Info();
	*/
	/*
	Developer developer("장길산", 34, 3, 3);
	developer.Eat();
	developer.Sleep();
	developer.Work();
	developer.Overtime();
	developer.NeverEndingStudy();
	developer.Info();
	*/
	ServerAdministrator sa("차돌바위", 17, 3, 30);
	sa.Eat();
	sa.Overtime();
	sa.Sleep();
	sa.Work();
	sa.Info();
}
