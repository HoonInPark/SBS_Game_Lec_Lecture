#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

void main()
{
	Shape* arrShape[] = { new Circle("원"), new Rectangle("사각형") };

	arrShape[0]->Draw();
	arrShape[1]->Draw();

	/*부모 클래스 변수를 통해 동적할당을 해제하면
	부모 클래스변수의 소멸자만 호출된다.
	만약 자식 클래스에서 동적할당을 하는 경우가 있다면
	이 경우 메모리 해제가 제대로 되지 않는다.

	그래서 Framework나 상속구조를 설계할 때는
	소멸자를 virtual로 선언을 한다.
	그러면 아래처럼 Shape변수로 동적할당 해제를 해도
	자식 객체의 소멸자도 정상적으로 호출되게 된다.
	
	결론:상속관계에 있을 때 소멸자는 무조건 virtual로 한다.
	*/
	delete arrShape[0];
	delete arrShape[1];
}