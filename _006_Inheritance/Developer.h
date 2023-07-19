#pragma once

#include "ComputerEngineer.h"

class Developer : public ComputerEngineer
{
protected:
	int nLanguage;		// 사용하는 언어의 수

public:
	Developer(string name, int age, int nComputer, int nLanguage);
	~Developer();

public:
	void NeverEndingStudy();	// 새로 추가한 함수
	void Sleep();				// 기존 기능 수정
	void Overtime();			// 기존 기능 확장
	void Info();				// 기존 기능 확장
};