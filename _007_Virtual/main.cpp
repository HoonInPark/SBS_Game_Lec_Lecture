#include "Human.h"
#include "ComputerEngineer.h"
#include "Developer.h"
#include "ServerAdministrator.h"

void main()
{
	/*객체의 클래스 타입에 따라 각각 클래스의 Play()가 호출된다.*/
	Human human("홍길동", 24);
	ComputerEngineer comEng("임꺽정", 33, 3);
	Developer dev("장길산", 25, 5, 7);
	ServerAdministrator sa("일지매", 35, 5, 24);

	cout << "----------------------------------" << endl;
	human.Play();
	comEng.Play();
	dev.Play();
	sa.Play();
	cout << "----------------------------------" << endl;

	/*자식객체 내에는 부모객체가 포함되어 있다.
	그러므로 컴파일러를 설계할 때 자식객체를 부모클래스변수에
	저장할 수 있도록 정해줬다.
	
	이 때 부모 클래스 변수는 자식 객체에 포함된 부모객체를 가리키게 된다.
	그러므로 컴파일러가 이 소스코드를 컴파일할 때(기계어로 변환)
	Human클래스의 포인터 변수인 것을 확인해서
	Play()를 호출할 때 Human클래스의 Play()를 호출한다.
	*/
	Human* pHuman = &human;
	pHuman->Play();
	pHuman = &comEng;
	pHuman->Play();
	pHuman = &dev;
	pHuman->Play();
	pHuman = &sa;
	pHuman->Play();

	cout << "----------------------------------" << endl;
	/*virtual을 붙여준 함수는 컴파일 시 기계어로 바꾸지 않는다.
	실행할 때 객체의 시작부분에 virtual table이 존재하고
	이곳에 객체자신의 Pleasure()함수의 주소를 등록한다.
	그러므로 컴파일 시 미리 정해놓는 것이 아니라
	실행할 때 객체의 주소를 따라 시작부분에 위치한 가상 테이블을 
	참조해서 객체에 해당하는 Pleasure()함수를 호출한다.

	virtual은 가상이라는 의미가 아니라 '사실상의'라는 의미이다.
	즉, 실행할 때 가리키는 포인터 변수의 자료형이 아니라
	포인터 변수에 담긴 실제 객체를 참조해서 호출하겠다는 의미이다.

	virtual함수가 있으므로 해서 장점은
	1) 새로운 상속 클래스가 있을 때도 기존 코드에 참여하게 할 수 있다
	2) 그래서 Framework의 발전을 가져왔다.
	비로소 C++시대에 들어서 Framework 개발방법이 자리잡게 된다.

	단, C++은 C언어와의 호환성을 강조하다보니
	개발자들이 C언어방식으로 프로그래밍하였고
	이것이 프로그래밍 방식의 혼재를 불러와서
	이후 Java부터 Framework 개발 방식이 대세가 된다.
	*/

	pHuman = &human;
	pHuman->Pleasure();
	pHuman = &comEng;
	pHuman->Pleasure();
	pHuman = &dev;
	pHuman->Pleasure();
	pHuman = &sa;
	pHuman->Pleasure();

	cout << "----------------------------------" << endl;
}
