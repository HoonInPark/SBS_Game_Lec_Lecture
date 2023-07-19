
#include <iostream>
#include <list>

using namespace std;
/*
* 리스트: 순서를 보장하는 구조
* 1) 배열구조: 순서를 보장하지만, 삽입/삭제가 느리다. 
*			중간에 삭제를 할 경우 뒤에 있는 데이터를 
			앞으로 당겨야 한다. 다음 공간이 바로 옆인,
			물리 연결 구조이다.
* 2) 연결리스트: 중간 삽입시 노드를 추가하여 앞이 가리키는 
*			위치와 뒤가 가리키는 위치만 연결해 주면 된다.
*			중간 삭제시 앞이 가리키는 위치를 뒤에 것으로
*			연결해 주면 된다. 따라서 삽입/삭제 속도가 빠름.
*/
void main()
{
	list<int> linked_list;
	for(int i=0;i<6;i++)
		linked_list.push_back(i);

	// 1번째 데이터의 포인터를 얻음
	list<int>::iterator it = linked_list.begin();

	// 2번째 데이터로 포인터 이동
	++it;

	// 새로운 데이터를 2번째 데이터 앞에 삽입
	linked_list.insert(it, 10);

	// iter가 가리키고 있던, 2번째였던 데이터를 삭제
	linked_list.erase(it);

	// 전체 데이터를 출력
	it = linked_list.begin();
	while(it!=linked_list.end())
		cout << *it++ << endl;
}