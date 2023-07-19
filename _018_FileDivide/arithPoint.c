#include "arithPoint.h"

Point AddPoint(Point* pa, Point* pb)
{
	Point temp;
	temp.x = pa->x + pb->x;
	temp.y = pa->y + pb->y;
	return temp;
}

Point SubPoint(Point* pa, Point* pb)
{
	Point temp;
	temp.x = pa->x - pb->x;
	temp.y = pa->y - pb->y;
	return temp;
}

Point MulPoint(Point* pa, Point* pb)
{
	Point temp;
	temp.x = pa->x * pb->x;
	temp.y = pa->y * pb->y;
	return temp;
}

Point DivPoint(Point* pa, Point* pb)
{
	Point temp;
	temp.x = pa->x / pb->x;
	temp.y = pa->y / pb->y;
	return temp;
}
