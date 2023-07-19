#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

void main()
{
	Shape* arrShape[] = { new Circle("��"), new Rectangle("�簢��") };

	arrShape[0]->Draw();
	arrShape[1]->Draw();

	delete arrShape[0];
	delete arrShape[1];
}