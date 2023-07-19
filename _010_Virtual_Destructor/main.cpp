#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

void main()
{
	Shape* arrShape[] = { new Circle("��"), new Rectangle("�簢��") };

	arrShape[0]->Draw();
	arrShape[1]->Draw();

	/*�θ� Ŭ���� ������ ���� �����Ҵ��� �����ϸ�
	�θ� Ŭ���������� �Ҹ��ڸ� ȣ��ȴ�.
	���� �ڽ� Ŭ�������� �����Ҵ��� �ϴ� ��찡 �ִٸ�
	�� ��� �޸� ������ ����� ���� �ʴ´�.

	�׷��� Framework�� ��ӱ����� ������ ����
	�Ҹ��ڸ� virtual�� ������ �Ѵ�.
	�׷��� �Ʒ�ó�� Shape������ �����Ҵ� ������ �ص�
	�ڽ� ��ü�� �Ҹ��ڵ� ���������� ȣ��ǰ� �ȴ�.
	
	���:��Ӱ��迡 ���� �� �Ҹ��ڴ� ������ virtual�� �Ѵ�.
	*/
	delete arrShape[0];
	delete arrShape[1];
}