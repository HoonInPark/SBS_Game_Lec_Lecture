#include <stdio.h>
//#include "arith.h"
#ifndef __ARITH_H__
#define __ARITH_H__

double Add(double a, double b);
double Sub(double a, double b);
double Mul(double a, double b);
double Div(double a, double b);

#endif

//#include "point.h"
#ifndef __POINT_H__
#define __POINT_H__

typedef struct _Point
{
	int x;
	int y;
}Point;

#endif

//#include "arithPoint.h"
#ifndef __ARITHPOINT_H__
#define __ARITHPOINT_H__

//#include "point.h"
	#ifndef __POINT_H__
	#define __POINT_H__

	typedef struct _Point
	{
		int x;
		int y;
	}Point;

	#endif

Point AddPoint(Point* pa, Point* pb);
Point SubPoint(Point* pa, Point* pb);
Point MulPoint(Point* pa, Point* pb);
Point DivPoint(Point* pa, Point* pb);

#endif

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
	printf("\n");

	pt[0].x = 100; pt[0].y = 50;
	pt[1].x = 99; pt[1].y = 35;

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