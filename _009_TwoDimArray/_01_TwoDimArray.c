#include <stdio.h>

/*2차원 배열
; 1차원 배열을 층을 쌓은 것
논리적으로는 직사각형의 형태

0  1  2  3  4
5  6  7  8  9
10 11 12 13 14
*/

void main()
{
	// 기본 5개 int배열을 3층을 쌓은 것
	int kor[3][5];
	
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			kor[i][j] = i * 5 + j;
		}
	}

	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			printf("%2d ", kor[i][j]);
		}
		printf("\n");
	}
}