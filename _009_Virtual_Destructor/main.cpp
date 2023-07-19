#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

void main()
{
	Shape* arrShape[] = { new Circle("원"), new Rectangle("사각형") };

	arrShape[0]->Draw();
	arrShape[1]->Draw();

	delete arrShape[0];
	delete arrShape[1];
}