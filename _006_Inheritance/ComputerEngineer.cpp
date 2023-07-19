#include "ComputerEngineer.h"

/* ��ӹ��� �ڽ� ��ü ���ο��� �θ� ��ü�� ���Եȴ�.
* �׷��Ƿ� �θ� ��ü�� ���� ������ �� �ڽ� ��ü�� ���� �κ��� ��������Ƿ�
* �θ� ������ ȣ�� �� �ڽ� ������ ȣ���� �̷������.
* 
* �ڽ� �����ڿ��� �θ� �������� �ʱ�ȭ�� �Ϸ���
* ��� �̴ϼȶ����� ������ �θ� ������ �ʱ�ȭ�� �Ѵ�.
*/
ComputerEngineer::ComputerEngineer
	(string name="ComputerEnginner", int age=1, int nComputer=1)
	: Human(name, age)
{
	this->nComputer = nComputer;

	cout << "ComputerEngineer ������ ȣ��" << endl;
}

ComputerEngineer::~ComputerEngineer()
{
	cout << "~ComputerEngineer �Ҹ��� ȣ��" << endl;
}


void ComputerEngineer::Overtime()
{
	cout << this->name << "�� �߱��� �����Ѵ�" << endl;
}

void ComputerEngineer::Info()
{
	Human::Info();
	cout << "��� ��ǻ�� : " << this->nComputer << "��" << endl;
}
