#pragma once

#include "ICar.h"

class ToyotaCar : public ACar
{
public:
	ToyotaCar()
	{
		SetName("����Ÿ ���� ũ����");
	}
	virtual void Driver();
	virtual void Accel();
	virtual void Break();
};
