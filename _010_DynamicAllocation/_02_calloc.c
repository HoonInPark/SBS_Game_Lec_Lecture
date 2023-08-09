#include <stdio.h>
#include <stdlib.h>

#define KOR_NUM		3

void main()
{
	/*
	* 동적할당하고 나서 할당한 모든 메모리를 0으로 초기화한다.
	* 아래 2줄의 코드와 calloc의 1줄과 동일한 코드이다.
	int* pKor = (int*)malloc(KOR_NUM * sizeof(int)); 여기서는 메모리를 얼마나 할당할지만 정해졌을 뿐, 메모리 상에 어디에 위치하는지는 정해지지 않았다. 그래서 컴퓨터는 이전에 다른 변수가 사용했던 주소 값을 집어넣는다. memset을 쓰지 않음면 엉뚱한 주소값을 가지게 된다. 이게 포인터의 쓰레기 값이다.
	memset(pKor, 0, sizeof(int)*KOR_NUM); 그래서 이 행과 같이 pKor의 메모리 시작 위치를 0으로 초기화해주고, 거기서부터 얼마만큼이 이 변수가 차지하는 범위인지를 알고자 sizeof(int)*KOR_NUM를 써준다.
	*/
	int* pKor = (int*)calloc(KOR_NUM, sizeof(int)); // calloc을 쓰게 되면, 주소 값을 쓰레기 값이 아닌 실제 값으로 정해준다. (추천!)
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