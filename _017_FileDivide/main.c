#include <stdio.h>
#include "arith.h"
#include "point.h"
#include "arithPoint.h"


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