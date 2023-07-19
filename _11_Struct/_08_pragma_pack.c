#include <stdio.h>

/* 아래는 구조체의 멤버 변수를 메모리에 올릴 때
*  빈 공간이 없도록 1byte단위로 공간을 구성하라는 의미이다.
* 이렇게 하면 St1과 St2의 메모리상의 크기가 동일하게 된다.
* 
* 주로 구조체를 char배열로 변환하여 소켓통신을 통해 상대방한테 전달할 때
* 이 처리를 서버, 클라이언트가 하지 않으면
* 만약 서버와 클라이언트의 구조체 정렬 크기가 다를 경우
* 정상적인 데이터 송수신이 안된다.
* 
* 특히 이 기종 Machine인 경우 종종 발생한다.
* PC <-> 임베디드HW, x86 <-> x64
*/

#pragma pack(push, 1)
typedef struct _St1
{
	char ch;
	char ch2;
	short s;
	int i;
	double d;
}St1;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct _St2
{
	char ch;
	char ch2;
	double d;
	short s;
	int i;
}St2;
#pragma pack(pop)

void main()
{
	printf("St1의 크기 : %d\n", sizeof(St1));	// 16byte
	printf("St2의 크기 : %d\n", sizeof(St2));	// 24byte
}
