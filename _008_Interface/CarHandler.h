#pragma once

#include "ICar.h"

#define PROC_COUNT	3

class CarHandler
{
private:
	ACar* m_pCar;

public:
	CarHandler(ACar* pCar);
	~CarHandler();

public:
	void SpeedUp();
	void SpeedDown();
	void CarStop();
	void CarTotalTest();
};