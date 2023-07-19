#include <iostream>
using namespace std;

class Theater
{
private:
	// 클래스 소속으로 모든 객체가 공유하는 변수
	// 아무리 객체를 많이 만들어도 단 1개의 변수만 생성된다.
	static int enterCount;
	// 객체 생성 갯수만큼 객체별로 생성(멤버변수 = 필드)
	char name[30];
	int seat;

public:
	Theater(const char* pName, int _seat)
		:seat(_seat)
	{
		strncpy_s(name, sizeof(name), pName, strlen(pName));
	}
	~Theater(){}

public:
	static void AddEnterCount()
	{
		enterCount++;
	}
	static int GetEnterCount()
	{
		return enterCount;
	}
	void ShowTheater()
	{
		cout << "극장명 : " << name << endl;
		cout << "좌석수 : " << seat << endl;
	}
};

// static 변수의 초기화(private이라도 초기화는 시켜야 하므로 이렇게 허용)
int Theater::enterCount = 0;

void main()
{
	Theater th0("종로CGV", 3000);
	th0.ShowTheater();

	Theater th1("명동CGV", 2000);
	th1.ShowTheater();

	Theater th2("신촌CGV", 3500);
	th2.ShowTheater();

	for (int i = 0; i < 500;i++)
		th0.AddEnterCount();
	for (int i = 0; i < 1500;i++)
		th1.AddEnterCount();
	for (int i = 0; i < 2500;i++)
		th2.AddEnterCount();
	/*
	* C++의 static멤버는 객체or클래스 둘다를 이용해 사용할 수 있도록 했지만
	* Java/C#에서는 static은 명시적으로 클래스 소속이므로 반드시 
	* 클래스를 통해서만 접근하게 하였다.
	* 
	* 위의 코드와 이 코드는 결과가 동일하다.
	for (int i = 0; i < 500;i++)
		Theater::AddEnterCount();
	for (int i = 0; i < 1500;i++)
		Theater::AddEnterCount();
	for (int i = 0; i < 2500;i++)
		Theater::AddEnterCount();
	*/
	/*static은 클래스 */
	cout << "모든 극장의 입장 관객 수는 " << Theater::GetEnterCount() << endl;
}