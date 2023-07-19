#include <stdio.h>

// 배열의 초기화
// 초기화 값들이 있으면 컴파일러가 그 값들의 갯수를 알아낼 수 있으므로
// 배열의 크기를 적어주지 않아도 무방하다(물론 써줘도 된다).
void main()
{
	int kor[] = { 99, 89, 100, 78, 67 };
	char* name[] = { "홍길동", "임꺽정", "장길산", "차돌바위", "일지매" };
	int ARR_LEN = sizeof(kor) / sizeof(kor[0]);

	for (int i = 0;i < ARR_LEN;i++)
	{
		printf("%s : %d\n", name[i], kor[i]);
	}
}