#include <iostream>

/* C에서의 구조체는 변수들의 집합
*  C++에서의 구조체는 변수들 + 함수들의 집합으로 확장되었다.
*/
struct Point
{
	int x;
	int y;

	void ShowPoint()
	{
		printf("%d, %d\n", x, y);
	}
};

void main()
{
	Point pt = { 10, 20 };
	pt.ShowPoint();
}