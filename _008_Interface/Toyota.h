#pragma once

#include "ICar.h"

class ToyotaCar : public ACar
{
public:
	ToyotaCar()
	{
		SetName("도요타 랜드 크루저");
	}
	virtual void Driver();
	virtual void Accel();
	virtual void Break();
};
