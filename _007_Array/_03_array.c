#include <stdio.h>
/*
1) C#의 배열
int[] kor = new int[3];
 => kor은 참조변수로 Heap에 있는 int배열 객체를 가리키고 있다.
	int배열 객체는 int가 나란히 3개 이어져 있다.

2) C의 배열
int kor[3];
 => int 자료형을 가진 변수가 kor이라는 대표명으로
	나란히 3개 이어져 있다.
*/

#define KOR_NUM	5

void main()
{
	int total = 0;
	double avg;
	int kor[KOR_NUM];
	for (int i = 0;i < KOR_NUM;i++)
	{
		printf("%d번째 학생 국어 점수 입력 >> ", i + 1);
		scanf_s("%d", &kor[i]);
	}

	for (int i = 0;i < KOR_NUM;i++)
		total += kor[i];

	avg = (double)total / KOR_NUM;

	printf("총합은 %d, 평균은 %.2lf\n", total, avg);
}