#include <iostream>
#include <string>
#include <set>

using namespace std;

/*
* set(집합): 순서가 보장되지 않는다. 중복을 허용하지 않는다.
*/

void main()
{
	int i;
	string fruit_array[] = {"kiwi", "apple", "pineapple",
		"orange", "lemon", "banana"};
	set<string> fruit_set;
	for(i=0;i<sizeof(fruit_array)/sizeof(string);i++)
		fruit_set.insert(fruit_array[i]);

	string test_array[] = {"strawberry", "banana", "watermelon",
							"apple", "melon", "kiwi"};
	for(i=0;i<sizeof(test_array)/sizeof(string);i++)
	{
		set<string>::iterator found = fruit_set.find(test_array[i]);
		if(found != fruit_set.end())
			cout << *found << " found in the set." << endl;
	}
}