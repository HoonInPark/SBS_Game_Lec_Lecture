#include <iostream>

using namespace std;

void main()
{
	int num = 100;
	int& rNum = num;
	cout << rNum << endl;

	/*���������� ó������ �ʱ�ȭ(�ٸ� ������ �����Ѿ� ��)*/
	int& rNum1;
	rNum1 = num;
	cout << rNum1 << endl;	

}