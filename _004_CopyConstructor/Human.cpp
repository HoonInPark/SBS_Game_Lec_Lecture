#include "Human.h"
#include <string.h>
#include <iostream>

using namespace std;

/*
* 아래 생성자를 이처럼 만들 수 있다.
* : pName(NULL), age(0), height(0) => 멤버 이니셜라이즈 영역
* 멤버 이니셜라이즈 영역은 memset(job, 0, sizeof(job)); 보다 먼저 호출된다.
Human::Human()
	: pName(NULL), age(0), height(0)
{
	memset(job, 0, sizeof(job));
}
*/
Human::Human()
{
	pName = NULL;
	memset(job, 0, sizeof(job));
	age = 0;
	height = 0;
}

Human::Human(const char* _pName, const char* _job, int _age, float _height)
{
	/*이름은 전달되는 이름마다 길이가 다르므로 그냥 배열을 사용하지 않고
	여기서는 이름의 길이+1만큼 동적배열을 생성하였다.
	+1을 한 이유는 문자열의 끝에 null이 들어가야 하기 때문에*/

	int len = strlen(_pName);	// 문자열의 길이를 구하는 함수
	pName = new char[len + 1];	// Heap에 len+1길이만큼 char 배열을 생성
	memset(pName, 0, len + 1);	// 생성된 동적 배열을 0으로 초기화
	strncpy_s(pName, len+1, _pName, len);	// _pName의 문자열을 pName에 len길이만큼 복사

	len = strlen(_job);
	len = len < JOB_STR_LEN ? len : JOB_STR_LEN - 1;
	strncpy_s(job, JOB_STR_LEN, _job, len);
	job[len] = '\0';		// 문자열의 끝에 null값 추가
	age = _age;
	height = _height;
}

/*아래 복사생성자를 직접 정의하지 않으면
컴파일러는 자동으로 Default 복사 생성자를 추가한다
// 컴파일러가 생성해주는 복사 생성자(객체간의 모든 변수값을 동일하게 복사한다)
Human::Human(Human& human)
{
	// pName에는 human객체의 pName의 주소가 복사된다.
	// 그러므로 소멸자에서 hong과 any는 2번 delete하는데
	// 이미 hong에서 pName은 delete되었으므로 any소멸자가
	// delete할 때 오류가 발생한다.
	pName = human.pName;	
	strncpy_s(job, sizeof(job), human.job, sizeof(human.job));
	age = human.age;
	height = human.height;
}
*/

// 직접 정의한 복사생성자
// Human any = hong;
Human::Human(Human& human)
{
	int len = strlen(human.pName);
	pName = new char[len + 1];
	memset(pName, 0, len + 1);
	strncpy_s(pName, len + 1, human.pName, len);

	len = strlen(human.job);
	len = len < JOB_STR_LEN ? len : JOB_STR_LEN - 1;
	strncpy_s(job, JOB_STR_LEN, human.job, len);
	job[len] = '\0';
	age = human.age;
	height = human.height;
}

Human::~Human()
{
	delete[] pName;
}

void Human::ShowHuman()
{
	cout << "Name : " << pName << endl;
	cout << "Job : " << job << endl;
	cout << "Age : " << age << endl;
	cout << "Height : " << height << endl << endl;
}
