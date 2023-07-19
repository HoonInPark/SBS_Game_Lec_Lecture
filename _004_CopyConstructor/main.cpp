#include "Human.h"

void main()
{
	Human hong("홍길동", "활빈당", 24, 174.5f);
	/*복사 생성자 호출
	Human any(hong);
	*/
	Human any = hong; 

	hong.ShowHuman();
	any.ShowHuman();
}