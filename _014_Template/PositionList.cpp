#include "PositionList.h"

PositionList::PositionList(int arrLen)
{
	this->len = arrLen;
	this->arr = new int[arrLen];		// int를 여러개 저장할 동적 배열을 생성
}

PositionList::~PositionList()
{
	delete[] arr;
}

bool PositionList::SetPosition(int index, int position)
{
	// 배열의 범위를 벗어나면 false
	if (index < 0 || index >= this->len)
		return false;

	this->arr[index] = position;
	return true;
}

bool PositionList::GetPosition(int index, int& position)
{
	// 배열의 범위를 벗어나면 false
	if (index < 0 || index >= this->len)
		return false;

	position = this->arr[index];
	return true;
}

#include <iostream>

using namespace std;

void main()
{
	PositionList posList(10);
	for (int i = 0;i < 10;i++)
		posList.SetPosition(i, i);
	for (int i = 0;i < 10;i++)
	{
		int result;
		posList.GetPosition(i, result);
		cout << result << endl;
	}
	cout << "-------------------------------" << endl;
		
	posList.SetPosition(5, 150);
	posList.SetPosition(3, 933);

	for (int i = 0;i < 10;i++)
	{
		int result;
		posList.GetPosition(i, result);
		cout << result << endl;
	}
}