#include <stdio.h>

/* C���� enum���� ����� ���� �� �ʿ��� �� �����ؼ� ���ȴ�.
* �����Ϸ��� enum���� ���� int�� ó���Ѵ�.
* 
* ���� �ο��� enum�� ����� ���� ����� �ڵ����� 1�� ������ ������ �ο��ȴ�.
*/
typedef enum _CNUM
{
	ONE=1,
	TWO,
	THREE,
	FOUR,
	FIVE
}CNUM;

void main()
{
	printf("ONE %d\n", ONE);
	printf("TWO %d\n", TWO);
	printf("THREE %d\n", THREE);
	printf("FOUR %d\n", FOUR);
	printf("FIVE %d\n", FIVE);

	//enum _CNUM cnum = ONE;
	CNUM cnum = ONE;

	for (cnum = ONE;cnum <= FIVE;cnum++)
	{
		printf("%d\n", cnum);
	}
}	