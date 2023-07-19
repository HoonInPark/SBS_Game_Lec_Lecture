#pragma once

#include "ICar.h"

class HyundaiCar : public ACar
{
public:
	HyundaiCar()
	{
		SetName("현대 제네시스");
	}
	virtual void Driver();
	virtual void Accel();
	virtual void Break();
};