#include <iostream>

#define ref

using namespace std;

void GetHourMinSec(int second, ref int& rHour, ref int& rMin, ref int& rSec)
{
	rSec = second % 60;
	rMin = second / 60;
	rHour = rMin / 60;
	rMin = rMin % 60;
}

void main()
{
	int hour, min, sec;
	/*포인터를 쓰면 
	GetHourMinSec(3720, &hour, &min, &sec);
	참조변수를 쓰면
	GetHourMinSec(3720, hour, min, sec);

	둘 중에 포인터가 코드를 읽을 때 hour, min, sec가 값을 돌려받는다는 의미가
	더 잘 전달되므로 프로그래머들은 관습적으로 참조변수보다 포인터를 더 선호하곤 한다.
	*/
	GetHourMinSec(3720, ref hour, ref min, ref sec);
	cout << hour << ":" << min << ":" << sec << endl;
	GetHourMinSec(4836, ref hour, ref min, ref sec);
	cout << hour << ":" << min << ":" << sec << endl;
}