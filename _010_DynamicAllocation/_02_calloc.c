#include <stdio.h>
#include <stdlib.h>

#define KOR_NUM		3

void main()
{
	/*
	* 동적할당하고 나서 할당한 모든 메모리를 0으로 초기화한다.
	* 아래 2줄의 코드와 calloc의 1줄과 동일한 코드이다.
	int* pKor = (int*)malloc(KOR_NUM * sizeof(int));
	memset(pKor, 0, sizeof(int)*KOR_NUM);
	*/
	int* pKor = (int*)calloc(KOR_NUM, sizeof(int));
	for (int i = 0;i < KOR_NUM;i++)
	{
		printf("%d번째 국어 점수 입력 >> ", i + 1);
		scanf_s("%d", &pKor[i]);   // (pKor + i)
	}
	printf("\n");

	for (int i = 0;i < KOR_NUM;i++)
	{
		printf("%d번째 국어 점수 : %d\n", i + 1, pKor[i]);
	}

	free(pKor);
}