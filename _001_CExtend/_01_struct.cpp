#include <iostream>

struct Point
{
	int x;
	int y;
};

void main()
{
	/*C������ struct Point�� �����ϰų� typedef�� ����ؾ� �ϴµ�
	  C++������ Point�� �����ص� �ȴ�.*/
	Point pt = { 10, 20 };
	printf("%d, %d\n", pt.x, pt.y);
}