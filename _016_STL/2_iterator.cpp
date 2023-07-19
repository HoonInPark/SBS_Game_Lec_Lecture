#include <iostream>
#include <vector>

using namespace std;

void main()
{
	vector<int> dynamic_array(6);
	for(int i=0;i<6;i++)
		dynamic_array[i] = i;

	dynamic_array.push_back(7);
	dynamic_array.push_back(8);

	for(int i=0;i<dynamic_array.size();i++)
		cout << dynamic_array[i] << endl;
	/*
	iterator(�ݺ���)
	template�̶�� ������ ���� �����ϰ� �ڷ����� �ٸ� �� ����ϴ� �����̴�.
	�׷��� �ڷᱸ��/�˰����� ���� �� ���� ����Ѵ�. �׷��� ź���� ���� 
	STL(Standard Template Library)�̴�. �ڷᱸ������ ���ٹ���� ���ݾ� �ٸ� �� �ִ�. 
	�׷��� ������ �ڷᱸ������ ���α׷����� �ٸ��� �ϸ� �ڵ��� �������� ��������. 
	�ڷᱸ���� �̷��� ���̼��� Ŀ����� ���ؼ� ������ ������ ������ �ϴ� ����
	�ݺ����̴�.
	*/
	vector<int>::iterator it = dynamic_array.begin();
	while(it != dynamic_array.end())
		cout << *it++ << " ";
	cout << endl;

	for (vector<int>::iterator it = dynamic_array.begin();
		it != dynamic_array.end(); it++)
		cout << *it << " ";
	cout << endl;

	// ��������
	vector<int>::reverse_iterator rIt = dynamic_array.rbegin();
	while(rIt != dynamic_array.rend())
		cout << *it++ << " ";
	cout << endl;
}