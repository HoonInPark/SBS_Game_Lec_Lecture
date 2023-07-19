#include <iostream>
#include <string>
using namespace std;

void main()
{
	// 확장자가 txt인 파일을 찾아라.
	string filename[] = {"readme.txt", "presentation.ppt",
					"word.doc", "manual.pdf", "plain.txt"};
	for(int i=0;i<sizeof(filename)/sizeof(string);i++)
	{
		// 뒤에서부터 찾아라.
		int period = filename[i].rfind('.');
		if(period != string::npos) // npos: 찾지 못했을 때 반환되는 값
		{
			string extension = filename[i].substr(period);
			if(extension.compare(".txt") == 0)
				cout << filename[i] << endl;
		}
	}
}