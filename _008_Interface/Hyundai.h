#pragma once

#include "ICar.h"

class HyundaiCar : public ACar
{
public:
	HyundaiCar()
	{
		SetName("���� ���׽ý�");
	}
	virtual void Driver();
	virtual void Accel();
	virtual void Break();
};