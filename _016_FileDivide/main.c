#include <stdio.h>
//#include "arith.h"
/*위 #include "arith.h" 대신 아래 코드로 치환된다.*/
double Add(double a, double b);
double Sub(double a, double b);
double Mul(double a, double b);
double Div(double a, double b);

//#include "point.h"
typedef struct _Point
{
	int x;
	int y;
}Point;

//#include "arithPoint.h"
  //#include "point.h"
typedef struct _Point
{
	int x;
	int y;
}Point;

Point AddPoint(Point* pa, Point* pb);
Point SubPoint(Point* pa, Point* pb);
Point MulPoint(Point* pa, Point* pb);
Point DivPoint(Point* pa, Point* pb);


extern Point pt[2];

void main()
{
	int result = 0;
	result = Add(10, 20);
	printf("%d\n", result);
	result = Sub(10, 20);
	printf("%d\n", result);
	result = Mul(10, 20);
	printf("%d\n", result);
	result = Div(10, 20);
	printf("%d\n", result);

	Point ptResult;
	ptResult = AddPoint(&pt[0], &pt[1]);		// pt+0, pt+1
	printf("%d, %d\n", ptResult.x, ptResult.y);
	ptResult = SubPoint(&pt[0], &pt[1]);
	printf("%d, %d\n", ptResult.x, ptResult.y);
	ptResult = MulPoint(&pt[0], &pt[1]);
	printf("%d, %d\n", ptResult.x, ptResult.y);
	ptResult = DivPoint(&pt[0], &pt[1]);
	printf("%d, %d\n", ptResult.x, ptResult.y);
}