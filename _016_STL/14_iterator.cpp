#include <iostream>
#include <string>
#include <set>

using namespace std;

void main()
{
	int i;
	string fruit_array[] = {"kiwi", "apple", "pineapple",
							"orange", "lemon", "banana"};
	set<string> fruit_set;
	for(i=0;i<sizeof(fruit_array)/sizeof(string);i++)
		fruit_set.insert(fruit_array[i]);

	set<string>::iterator it = fruit_set.begin();
	while(it!=fruit_set.end())
		cout << *it++ << endl;
}