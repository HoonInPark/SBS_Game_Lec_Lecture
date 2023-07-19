#pragma once

#include "ICar.h"

class TeslaCar : public ACar
{
public:
	TeslaCar()
	{
		SetName("Tesla Model 3");
	}
	virtual void Driver();
	virtual void Accel();
	virtual void Break();
};
