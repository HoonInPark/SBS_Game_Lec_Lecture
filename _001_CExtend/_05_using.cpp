#include <iostream>

/*�Ʒ�ó�� std ���ӽ����̽��� �ִ� ��ü�� ���� ����� �� std�� �����ϰ� �ʹ�.
�̷� �� 2���� ����� �ִ�.*/
/*
void main()
{
	int num0, num1;
	std::cout << "2���� ���� �Է� " << std::endl;
	std::cin >> num0 >> num1;
	std::cout << num0 << "+" << num1 << "=" << num0 + num1 << std::endl;
}
*/

/*1��° ���*/
/*
using std::cin;
using std::cout;
using std::endl;

void main()
{
	int num0, num1;
	cout << "2���� ���� �Է� " << endl;
	cin >> num0 >> num1;
	cout << num0 << "+" << num1 << "=" << num0 + num1 << endl;
}
*/

/*2��° ���*/
// std ���ӽ����̽��� ���� ��� ������� std�� �����ϰ� ����ϰڴ�.
using namespace std;

void main()
{
	int num0, num1;
	cout << "2���� ���� �Է� " << endl;
	cin >> num0 >> num1;
	cout << num0 << "+" << num1 << "=" << num0 + num1 << endl;
}
