#include "Point.h"

/* C++객체 생성
* 1) Point pt; 
*    지역변수로 Stack에 객체가 올라간다.
* 2) Point* pt = new Point();
*    ~~~
*    delete pt;
*    pt는 지역변수로 객체의 주소가 저장
*    pt객체는 Heap에 올라간다.
*/
/* 스택에 객체 생성
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

/* 힙에 객체 생성
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
	// 객체 생성시 생성자 호출
	Point pt0(10, 20), pt1(100, 200);

	pt0.ShowPoint();
	pt1.ShowPoint();

	pt0.AddPoint(pt1);
	pt0.ShowPoint();

	pt0.MovePoint(-10, -10);
	pt0.ShowPoint();

	/*pt0과 pt1은 지역변수이므로 main()함수가 끝날 때 스택에서 소멸됨
	소멸자 호출*/
}