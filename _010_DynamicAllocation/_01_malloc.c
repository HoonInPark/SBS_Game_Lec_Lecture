#include <stdio.h>
#include <stdlib.h>

#define KOR_NUM		3

void main()
{
	/* malloc: memory allocation(메모리를 Heap에 할당한다)
	* malloc(할당할 byte크기)
	*/
	/*힙메모리에 4*3 = 12byte할당하고
	지역변수인 pKor이 할당한 메모리의 시작주소를 가리킨다.
	
	=> 힙메모리에 3개짜리 int 배열을 동적 생성
	*/
	int* pKor = (int*)malloc(sizeof(int) * KOR_NUM);
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

	/* C와 C++은 힙메모리에 할당한 메모리를 직접 잊지말고 관리해야 한다.
	* 만약 서버프로그램이 계속 메모리를 할당하고 필요없는 메모리를 해제하지 않는다면
	* 그 서버는 어느 순간 갑자기 메모리 부족으로 종료되게 된다.
	* 이 때 서버프로그램 종료되는 이유를 찾기 까지 많이 시간과 비용이 소모되게 된다.
	* 그래서 C, C++에서는 Heap에 할당한 동적 메모리를 적절한 시점에 잘 해제하는 
	* 것이 매우 중요하게 된다.
	* 
	* Java/C#은 프로그램에서 Heap을 사용하는 동적 메모리를 해제하지 않는 것이 종종
	* 많은 sw의 에러의 원인이 되는 것을 발견하고
	* 과감하게 VM/CLR내에 GC(Garbage Collection: 쓰레기 수집기)를 두고
	* 더 이상 참조되지 않는 동적 메모리를 자동 해제해줌으로써
	* C/C++에 비해 메모리 누수에 의한 에러를 많이 줄였다.
	*/
	// pKor이 가리키는 할당된 메모리를 해제한다.
	free(pKor);
}