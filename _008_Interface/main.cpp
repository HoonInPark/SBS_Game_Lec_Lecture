#include "Hyundai.h"
#include "Tesla.h"
#include "Toyota.h"
#include "CarHandler.h"

void main()
{
	// 객체의 주소를 3개 저장하는 포인터 배열
	ACar* arrCar[] = { new HyundaiCar(),
					  new TeslaCar(),
					  new ToyotaCar() };

	// sizeof(arrCar) / sizeof(arrCar[0]) => 3의 결과
	for (int i = 0;i < sizeof(arrCar) / sizeof(arrCar[0]);i++) 
	{
		CarHandler carTest(arrCar[i]);
		carTest.SpeedUp();
		carTest.SpeedDown();
		carTest.CarStop();
		carTest.CarTotalTest();
	}


	// 동적할당 해제
	delete arrCar[0];
	delete arrCar[1];
	delete arrCar[2];
}