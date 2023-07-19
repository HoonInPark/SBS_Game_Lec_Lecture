#include "Tesla.h"
#include "iostream"

using namespace std;

void TeslaCar::Driver()
{
	cout << "TeslaCar::Driver() - 자율주행이 된다." << endl;
}
void TeslaCar::Accel()
{
	cout << "TeslaCar::Accel() - 느닷없이 가속이 된다." << endl;
}
void TeslaCar::Break()
{
	cout << "TeslaCar::Break() - 가끔 사물을 잘 못 인식할 때 도 있다. 끼이익~" << endl;
}