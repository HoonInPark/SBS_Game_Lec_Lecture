#include <iostream>

/*
 C++에서의 struct와 class는 용법이 동일하다.
 그렇다면 struct를 쓰면되는데 왜 class 문법을 새로 만들었을까?
 이유는 struct는 C언어와의 호환성을 유지해야했다.
 C언어시절에는 '접근권한' 개념이 없던 때로 구조체의 멤버변수를 자유롭게 접근하였다.
 그러므로 struct 멤버의 디폴트 접근권한은 자동으로 public이 된다.
 반면에 class는 객체라는 개념이 정립되면서 탄생한 문법이다.
 객체지향의 3대 요소인 '캡슐화'에 충실하기 위해
 class 멤버의 디폴트 접근권한은 자동으로 private이 된다.
 '캡슐화'는 외부에서는 class 내부 멤버를 불필요하게 접근해서는 안된다는 개념이다.
 이 개념으로 오류를 방지하고 외부에서는 노출된 것만 사용하면 되므로
 프로그래밍이 보다 정리된 형태, 오류 방지 효과를 가져올 수 있다.

 struct는 C언어와의 호환성을 위해 public(누구나 접근 가능)
 class는 객체지향 프로그래밍의 원칙에 충실하기 위해 새로운 문법이 필요했고
 그러므로 private(클래스 멤버끼리만 접근 가능) 권한이 디폴트이다.

 그러므로 C++에서 객체를 만드는 문법은 struct와 class 2가지이다.
 이미 C언어 시절의 문법에 익숙해진 개발자들은 struct는 주로 변수들의 집합으로,
 class는 변수들+함수들의 집합인 객체 용도로 주로 사용한다.

 언리얼도 주로 그렇게 사용한다.
*/

using namespace std;

struct Point0
{
	int x, y;

	void ShowPoint()
	{
		cout << "x:" << x << ", y:" << y << endl;
	}
};

class Point1
{
	// 이렇게 지정해주면 이후로는 모두 public
public:
	int x, y;

	void ShowPoint()
	{
		cout << "x:" << x << ", y:" << y << endl;
	}
};

void main()
{
	Point0 pt0;
	Point1 pt1;

	pt0.x = 10;
	pt0.y = 20;
	pt0.ShowPoint();

	pt1.x = 100;
	pt1.y = 200;
	pt1.ShowPoint();
}