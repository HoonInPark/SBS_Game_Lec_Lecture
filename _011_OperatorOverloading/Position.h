#pragma once

#define endline		"\n"

class Position
{
private:
	int x, y;

public:
	Position();
	Position(int x, int y);
	~Position();

public:
	void ShowPosition();

	/*연산자 오버로딩
	C++에서는 연산자의 용법을 함수를 사용해서 
	재정의 할 수 있다.
	예를 들어 << 연산자는 
	원래 C언어에서는 비트의 값을 왼쪽으로 이동하라는 의미인데
	C++의 iostream에서 재정의해서 값을 전달하는 의미로 확장되었다.
	즉, 앞에 정수가 오면 << 는 비트를 이동하는 원래의 의미이고
	앞에 iostream 객체가 오면 << 는 iostream에서 operator<<()함수로
	재정의한 함수를 호출하게 된다.
	연산자 오버로딩은 연산자의 기호의 의미를 강조해서 직관적인 프로그래밍을
	가능하게 한다.
	C++, C#은 연산자 오버로딩을 지원하고
	Java는 연산자 오버로딩을 지원하지 않는다.
	*/
	Position& operator++();		// 전위증가연산자
	Position operator++(int);	// 후위증가연산자
	Position operator+(Position pos);  // pos1 + pos2;
	Position operator+(int num);	// pos1 + num;
	/*friend는 외부의 전역함수가
	Position 클래스의 private멤버를 자유롭게 접근할 수 있도록 하는 문법
	해당 함수를 친구로 설정해 private멤버를 자유롭게 접근한다.
	객체지향의 원칙에 위배되는 설정이라 논란이 있다.
	*/
	friend Position operator+(int num, Position pos);	// 10 + pos;

	Position& operator<<(int num);
	Position& operator<<(float num);
	Position& operator<<(double num);
	Position& operator<<(const char* num);
};