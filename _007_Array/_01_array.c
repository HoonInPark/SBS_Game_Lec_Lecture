#include <stdio.h>

void main()
{
	int total = 0;
	double avg;
	int kor0, kor1, kor2;
	printf("3명 학생 국어 점수 입력 >> ");
	scanf_s("%d %d %d", &kor0, &kor1, &kor2);

	total = kor0 + kor1 + kor2;
	avg = (double)total / 3;

	printf("총합은 %d, 평균은 %.2lf\n", total, avg);
}