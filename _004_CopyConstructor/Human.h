#pragma once

#define JOB_STR_LEN		50

class Human
{
private:
	char* pName;
	char job[JOB_STR_LEN];
	int age;
	float height;

public:
	Human();	
	Human(const char* _pName, const char* _job, int _age, float _height);
	/*디폴트 복사생성자는 객체의 멤버값을 그대로 복사한다.
	그러나 멤버변수중에 생성자에서 동적할당하는 멤버가 있을 때는
	반드시 복사생성자를 재정의 해줘야 한다.
	그래야 소멸자에서 이미 해제된 메모리를 또 해제하는 오류를
	막을 수 있다.*/
	Human(Human& human);		// 복사 생성자
	~Human();
	void ShowHuman();
};