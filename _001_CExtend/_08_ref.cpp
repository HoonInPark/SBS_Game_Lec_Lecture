#include <iostream>

#define ref

using namespace std;

void GetHourMinSec(int second, ref int& rHour, ref int& rMin, ref int& rSec)
{
	rSec = second % 60;
	rMin = second / 60;
	rHour = rMin / 60;
	rMin = rMin % 60;
}

void main()
{
	int hour, min, sec;
	/*�����͸� ���� 
	GetHourMinSec(3720, &hour, &min, &sec);
	���������� ����
	GetHourMinSec(3720, hour, min, sec);

	�� �߿� �����Ͱ� �ڵ带 ���� �� hour, min, sec�� ���� �����޴´ٴ� �ǹ̰�
	�� �� ���޵ǹǷ� ���α׷��ӵ��� ���������� ������������ �����͸� �� ��ȣ�ϰ� �Ѵ�.
	*/
	GetHourMinSec(3720, ref hour, ref min, ref sec);
	cout << hour << ":" << min << ":" << sec << endl;
	GetHourMinSec(4836, ref hour, ref min, ref sec);
	cout << hour << ":" << min << ":" << sec << endl;
}