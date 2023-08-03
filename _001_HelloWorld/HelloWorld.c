/* 헤더파일을 포함
* printf함수를 사용하려면 컴파일러한테 
함수의 원형정보와 함수를 전달해야 한다
함수의 원형정보는 stdio.h에 들어있고
함수자체는 Visual Studio와 연결된 dll에 들어있다.

일단 printf를 사용하기 위해 포함한다고 생각하면 된다.
*/
#include <stdio.h>

//C컴파일러는 main함수를 찾아서 진입점을 삼는다.
int main()
{
	printf("HelloWorld\n");		// \n은 아래로 개행

	return 0;
}