#include <iostream>

using namespace std;

void GetHourMinSec(int second, int* pHour, int* pMin, int* pSec) 
{
	*pSec = second % 60;
	*pMin = second / 60;
	*pHour = *pMin / 60;
	*pMin = *pMin % 60;
}

void main()
{
	int hour, min, sec;
	GetHourMinSec(3720, &hour, &min, &sec);
	cout << hour << ":" << min << ":" << sec << endl;
	GetHourMinSec(4836, &hour, &min, &sec);
	cout << hour << ":" << min << ":" << sec << endl;
}