#include <stdio.h>

/* C언어에서 enum형은 상수가 여러 개 필요할 때 정의해서 사용된다.
* 컴파일러는 enum형의 값을 int로 처리한다.
* 
* 값을 부여한 enum형 상수의 다음 상수는 자동으로 1이 증가한 값으로 부여된다.
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