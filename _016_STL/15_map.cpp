#include <iostream>
#include <map>
#include <string>
using namespace std;

/*
* map(dictionary, hashtable): key, value의 이중구조로 이루어져 있다.
* key 값을 겁색하면 value 값을 얻을 수 있다. 특정해서 검색하는 것에는 최적화되어 있다.
* 배열의 경우 운이 안좋을 경우 순차검색의 맨 마지막 element가 나올 수 있다.
*/

void main()
{
	map<string, int> month_days_map;

	// 1번 방법
	string month[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN",
					"JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
	int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	for(int i=0;i<sizeof(month)/sizeof(string);i++)
		month_days_map.insert(make_pair(month[i], days[i]));

	// 2번 방법
	//pair<string, int> month_days[] = {
	//	make_pair("JAN", 31), make_pair("FEB", 28), make_pair("MAR", 31),
	//	make_pair("APR", 30), make_pair("MAY", 31), make_pair("JUN", 30),
	//	make_pair("JUL", 31), make_pair("AUG", 31), make_pair("SEP", 30),
	//	make_pair("OCT", 31), make_pair("NOV", 30), make_pair("DEC", 31),
	//};
	//for(int i=0;i<sizeof(month_days)/sizeof(pair<string, int>);i++)
	//	month_days_map.insert(month_days[i]);

	cout << "달 이름을 영어 대문자로 세자까지만 입력하세요: ";
	string input;
	cin >> input;

	map<string, int>::iterator it = month_days_map.find(input);
	if(it == month_days_map.end())
		cout << "그런 달은 없습니다." << endl;
	else
		cout << (*it).first << "는 " << (*it).second
				<< "일 까지 있습니다." << endl;
}