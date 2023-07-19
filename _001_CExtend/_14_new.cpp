#include <iostream>

using namespace std;

#define ARR_NUM		5

/* C������ �����Ҵ� �� �� malloc/free �Լ��� ����ߴµ�
*  C++������ ���� ���� ����ϴٺ��� �ƿ� �����Ϸ��� �����ڷ� �����Ͽ���.
*     �׷��� new/delete �����ڸ� ����Ѵ�.
*/

void main()
{
	/*������ num���� 5�� int�迭�� �����ּ�
	  ������ 5�� int�迭�� ������ �Ҵ��*/
	int* num = new int[ARR_NUM];
	for (int i = 0;i < ARR_NUM;i++)
		num[i] = i * 10;
	for (int i = 0;i < ARR_NUM;i++)
		cout << num[i] << ", ";
	cout << endl;

	/*C++������ new�� �Ҵ������� �ݵ�� delete�ϴ� ������ ������ �Ѵ�*/
	delete[] num;
}