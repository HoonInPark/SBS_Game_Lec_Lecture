#include <iostream>

struct Point
{
	int x;
	int y;
};

void main()
{
	/*C에서는 struct Point로 선언하거나 typedef를 사용해야 하는데
	  C++에서는 Point로 선언해도 된다.*/
	Point pt = { 10, 20 };
	printf("%d, %d\n", pt.x, pt.y);
}