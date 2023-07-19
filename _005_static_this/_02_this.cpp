#include <iostream>

using namespace std;

class Point
{
public:
	// 멤버 변수 (필드)
	// 객체마다 별도로 생성
	int x, y;
public:
	// 멤버 함수 (메서드)
	/*첫번째 객체가 생성될 때 클래스의 함수가 메모리에 올라가고
	두번째 객체 이후로는 클래스의 함수를 공유해서 사용한다.
	
	이때 멤버함수는 1개이고 객체는 여러개일 때 멤버함수에서 접근하는
	멤버변수가 누구소속인지 구별해주는 값이 필요하다.
	그래서 컴파일러는 멤버함수를 컴파일할 때 첫번째 매개변수에
	해당되는 객체를 전달받을 this포인터 변수를 추가한다.
	이 this는 멤버함수를 호출하는 객체의 주소가 담겨있으므로
	이 this를 통해서 어떤 객체 소속의 멤버변수인지 구별이 가능하다.
	그래서 매개변수에 Point* this와 같은 매개변수가 보이지 않아도
	우리는 멤버함수에서 this->x이렇게 사용할 수 있다.
	this가 숨겨져 있다.
	*/
	void SetPoint(int x, int y)
	{
		/*this->x 는 객체에 소속된 멤버변수 x를 의미한다.
		this는 생략가능하지만 현재처럼 매개변수가 x일 때는
		x = x; 처럼 코딩하면 우선순위가 지역변수가 높으므로
		지역변수에 지역변수값을 대입하므로 멤버변수 x와는 무관한 일이 된다.
		그러므로 멤버변수와 동일한 이름의 매개변수가 있을 때는
		반드시 this->x = x;처럼 해야 한다.
		*/
		this->x = x;
		this->y = y;
	}
	void ShowPoint()
	{
		cout << "x:" << this->x << ", y:" << this->y << endl;
	}
	void PrintThis()
	{
		cout << "this:" << this << endl;
	}
};

/* C언어의 함수를 C++에서는 전역함수라고 한다.
* 원래 C언어에서는 그냥 함수라고 불렀지만
* C++에서는 클래스 내부의 함수와 구별할 명칭이 필요하였고
* 그래서 일반 함수를 전역함수라고 지칭한다.
*/
void ShowPoint(Point* pt)
{
	cout << "x:" << pt->x << ", y:" << pt->y << endl;
}

void main()
{
	Point pt0, pt1, pt2;
	pt0.SetPoint(10, 20);   // SetPoint(Point* this, int x, int y)
	pt1.SetPoint(100, 200);
	pt2.SetPoint(123, 456);
	pt0.ShowPoint();		// ShowPoint(Point* this) // ShowPoint(&pt0);
	pt1.ShowPoint();		// ShowPoint(&pt1);
	cout << "----------------------------" << endl;
	ShowPoint(&pt0);
	ShowPoint(&pt1);
	ShowPoint(&pt2);
	cout << "----------------------------" << endl;
	cout << "&pt0:" << &pt0 << endl;
	pt0.PrintThis();
	cout << "&pt1:" << &pt1 << endl;
	pt1.PrintThis();
	cout << "&pt2:" << &pt2 << endl;
	pt2.PrintThis();
}