#include "PositionList.h"
#include <iostream>

using namespace std;

void main()
{
	PositionList<int> posList(10);
	for (int i = 0;i < 10;i++)
		posList.SetPosition(i, i);
	for (int i = 0;i < 10;i++)
	{
		int result;
		posList.GetPosition(i, result);
		cout << result << " ";
	}

	cout << endl << "-------------------------------" << endl;
	
	// ���� �ʱ�ȭ ����(
	srand((unsigned int)time(NULL));

	PositionList<double> posList1(10);
	for (int i = 0;i < 10;i++)
		posList1.SetPosition(i, rand()/33.0);
	for (int i = 0;i < 10;i++)
	{
		double result;
		posList1.GetPosition(i, result);
		cout << result << " ";
	}
	cout << endl << "-------------------------------" << endl;
}