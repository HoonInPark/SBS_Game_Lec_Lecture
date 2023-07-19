#include <iostream>
#include <map>
#include <string>
using namespace std;

/*
* map(dictionary, hashtable): key, value�� ���߱����� �̷���� �ִ�.
* key ���� �̻��ϸ� value ���� ���� �� �ִ�. Ư���ؼ� �˻��ϴ� �Ϳ��� ����ȭ�Ǿ� �ִ�.
* �迭�� ��� ���� ������ ��� �����˻��� �� ������ element�� ���� �� �ִ�.
*/

void main()
{
	map<string, int> month_days_map;

	// 1�� ���
	string month[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN",
					"JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
	int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	for(int i=0;i<sizeof(month)/sizeof(string);i++)
		month_days_map.insert(make_pair(month[i], days[i]));

	// 2�� ���
	//pair<string, int> month_days[] = {
	//	make_pair("JAN", 31), make_pair("FEB", 28), make_pair("MAR", 31),
	//	make_pair("APR", 30), make_pair("MAY", 31), make_pair("JUN", 30),
	//	make_pair("JUL", 31), make_pair("AUG", 31), make_pair("SEP", 30),
	//	make_pair("OCT", 31), make_pair("NOV", 30), make_pair("DEC", 31),
	//};
	//for(int i=0;i<sizeof(month_days)/sizeof(pair<string, int>);i++)
	//	month_days_map.insert(month_days[i]);

	cout << "�� �̸��� ���� �빮�ڷ� ���ڱ����� �Է��ϼ���: ";
	string input;
	cin >> input;

	map<string, int>::iterator it = month_days_map.find(input);
	if(it == month_days_map.end())
		cout << "�׷� ���� �����ϴ�." << endl;
	else
		cout << (*it).first << "�� " << (*it).second
				<< "�� ���� �ֽ��ϴ�." << endl;
}