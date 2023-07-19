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
	iterator(반복자)
	template이라는 문법은 논리는 동일하고 자료형이 다를 때 사용하는 문법이다.
	그래서 자료구조/알고리즘을 만들 때 많이 사용한다. 그렇게 탄생한 것이 
	STL(Standard Template Library)이다. 자료구조마다 접근방식이 조금씩 다를 수 있다. 
	그래서 고유의 자료구조마다 프로그래밍을 다르게 하면 코드의 유연성이 떨어진다. 
	자료구조의 이러한 상이성을 커버라기 위해서 동일한 접근을 가능케 하는 것이
	반복자이다.
	*/
	vector<int>::iterator it = dynamic_array.begin();
	while(it != dynamic_array.end())
		cout << *it++ << " ";
	cout << endl;

	for (vector<int>::iterator it = dynamic_array.begin();
		it != dynamic_array.end(); it++)
		cout << *it << " ";
	cout << endl;

	// 역순으로
	vector<int>::reverse_iterator rIt = dynamic_array.rbegin();
	while(rIt != dynamic_array.rend())
		cout << *it++ << " ";
	cout << endl;
}