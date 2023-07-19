#include "Point.h"

/* C++��ü ����
* 1) Point pt; 
*    ���������� Stack�� ��ü�� �ö󰣴�.
* 2) Point* pt = new Point();
*    ~~~
*    delete pt;
*    pt�� ���������� ��ü�� �ּҰ� ����
*    pt��ü�� Heap�� �ö󰣴�.
*/
/* ���ÿ� ��ü ����
void main()
{
	Point pt0, pt1;
	
	pt0.SetPoint(10, 20);
	pt1.SetPoint(100, 200);

	pt0.ShowPoint();
	pt1.ShowPoint();

	pt0.AddPoint(pt1);
	pt0.ShowPoint();

	pt0.MovePoint(-10, -10);
	pt0.ShowPoint();
}*/

/* ���� ��ü ����
void main()
{
	Point *ppt0, *ppt1;
	ppt0 = new Point();
	ppt1 = new Point();

	ppt0->SetPoint(10, 20);
	ppt1->SetPoint(100, 200);

	ppt0->ShowPoint();
	ppt1->ShowPoint();

	ppt0->AddPoint(*ppt1);
	ppt0->ShowPoint();

	ppt0->MovePoint(-10, -10);
	ppt0->ShowPoint();

	delete ppt0;
	delete ppt1;
}*/

void main()
{
	// ��ü ������ ������ ȣ��
	Point pt0(10, 20), pt1(100, 200);

	pt0.ShowPoint();
	pt1.ShowPoint();

	pt0.AddPoint(pt1);
	pt0.ShowPoint();

	pt0.MovePoint(-10, -10);
	pt0.ShowPoint();

	/*pt0�� pt1�� ���������̹Ƿ� main()�Լ��� ���� �� ���ÿ��� �Ҹ��
	�Ҹ��� ȣ��*/
}