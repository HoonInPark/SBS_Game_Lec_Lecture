#pragma once

class PositionList
{
private:
	int* arr;
	int len;

public:
	PositionList(int arrLen = 100);
	~PositionList();
	bool SetPosition(int index, int position);
	bool GetPosition(int index, int& position);
};