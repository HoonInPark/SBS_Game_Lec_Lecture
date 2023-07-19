#include <iostream>
#include <map>
#include <string>
using namespace std;

/*
* 일반적으로 map구조는 key 값이 중복되지 않는다. 하지만 multimap은 key 값이 중복될 수 있다. 
* 하나의 키 값에 리스트가 (주렁주렁) 연결되어 있다고 생각하면 된다.
*/

typedef multimap<int, string>::iterator year_movie_it;

void main()
{
	multimap<int, string> year_movie_map;
	pair<int, string> year_movie[] = {
		make_pair(1998, "타이타닉"),
		make_pair(2008, "슬럼독 밀리어네어"),
		make_pair(1997, "인생은 아름다워"),
		make_pair(2003, "올드보이"),
		make_pair(1994, "라이온킹"),
		make_pair(1999, "매트릭스"),
		make_pair(1994, "포레스트검프"),
	};

	for(int i=0;i<sizeof(year_movie)/sizeof(pair<int, string>);i++)
		year_movie_map.insert(year_movie[i]);

	cout << "연도를 입력하세요: ";
	int input;
	cin >> input;

	pair<year_movie_it, year_movie_it> result 
		= year_movie_map.equal_range(input);
	if(result.first == result.second)
		cout << "그 해에 명작 영화가 없습니다." << endl;
	else
	{
		for(year_movie_it it = result.first;it!=result.second;it++)
			cout << (*it).second << endl;
	}
}