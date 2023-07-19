#include "CarHandler.h"
#include <windows.h>

CarHandler::CarHandler(ACar* pCar)
{
	this->m_pCar = pCar;
	cout << m_pCar->GetName() << " 테스트 투입" << endl;
}

CarHandler::~CarHandler()
{
	cout << m_pCar->GetName() << " 테스트 투입 종료" << endl;
}

void CarHandler::SpeedUp()
{
	cout << m_pCar->GetName() << " SpeedUp Test" << endl;

	for (int i = 0;i < PROC_COUNT;i++) 
	{
		m_pCar->Accel();
		Sleep(100);
	}
}

void CarHandler::SpeedDown()
{
	cout << m_pCar->GetName() << " SpeedDown Test" << endl;

	for (int i = 0;i < PROC_COUNT;i++)
	{
		m_pCar->Break();
		Sleep(100);
	}
}

void CarHandler::CarStop()
{
	cout << m_pCar->GetName() << " CarStop Test" << endl;

	for (int i = 0;i < PROC_COUNT*2;i++)
	{
		m_pCar->Break();
		Sleep(100);
	}
}

void CarHandler::CarTotalTest()
{
	cout << m_pCar->GetName() << " CarTotal Test" << endl;

	for (int i = 0;i < PROC_COUNT;i++)
	{
		SpeedUp();
		SpeedDown();
		SpeedUp();
		CarStop();
	}
}
