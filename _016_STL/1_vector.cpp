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
}