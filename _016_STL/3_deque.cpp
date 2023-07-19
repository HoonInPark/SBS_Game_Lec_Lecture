#include <iostream>
#include <deque>

using namespace std;
/*
* 양방향 동적 벡터이다.
* 앞, 뒤 모두로 저장 가능하다.
*/
void main()
{
	deque<int> double_ended(6);
	for(int i=0;i<6;i++)
		double_ended[i] = i;

	double_ended.push_back(7);
	double_ended.push_front(8);

	for(int i=0;i<double_ended.size();i++)
		cout << double_ended[i] << endl;
}