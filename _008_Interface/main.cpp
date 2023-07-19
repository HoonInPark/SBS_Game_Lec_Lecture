#include "Hyundai.h"
#include "Tesla.h"
#include "Toyota.h"
#include "CarHandler.h"

void main()
{
	// ��ü�� �ּҸ� 3�� �����ϴ� ������ �迭
	ACar* arrCar[] = { new HyundaiCar(),
					  new TeslaCar(),
					  new ToyotaCar() };

	// sizeof(arrCar) / sizeof(arrCar[0]) => 3�� ���
	for (int i = 0;i < sizeof(arrCar) / sizeof(arrCar[0]);i++) 
	{
		CarHandler carTest(arrCar[i]);
		carTest.SpeedUp();
		carTest.SpeedDown();
		carTest.CarStop();
		carTest.CarTotalTest();
	}


	// �����Ҵ� ����
	delete arrCar[0];
	delete arrCar[1];
	delete arrCar[2];
}