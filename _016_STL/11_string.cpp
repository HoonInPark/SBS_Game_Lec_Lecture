#include <iostream>
#include <string>
using namespace std;

void main()
{
	// Ȯ���ڰ� txt�� ������ ã�ƶ�.
	string filename[] = {"readme.txt", "presentation.ppt",
					"word.doc", "manual.pdf", "plain.txt"};
	for(int i=0;i<sizeof(filename)/sizeof(string);i++)
	{
		// �ڿ������� ã�ƶ�.
		int period = filename[i].rfind('.');
		if(period != string::npos) // npos: ã�� ������ �� ��ȯ�Ǵ� ��
		{
			string extension = filename[i].substr(period);
			if(extension.compare(".txt") == 0)
				cout << filename[i] << endl;
		}
	}
}