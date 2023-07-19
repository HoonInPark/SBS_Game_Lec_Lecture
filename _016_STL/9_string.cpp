//9. 문자열 검색 및 치환

#include <iostream>
#include <string>

using namespace std;

void main()
{
	string str("M red ballon matches my red hat red  red  red  red  red  red .");
	string red("red");
	string blue("blue");

	size_t found = str.find(red);
	while(found != string::npos)
	{
		str.replace(found, red.length(), blue);
		found = str.find(red, found+1);
	}
	cout << str << endl;
}