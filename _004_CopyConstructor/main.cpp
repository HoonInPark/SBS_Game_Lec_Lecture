#include "Human.h"

void main()
{
	Human hong("ȫ�浿", "Ȱ���", 24, 174.5f);
	/*���� ������ ȣ��
	Human any(hong);
	*/
	Human any = hong; 

	hong.ShowHuman();
	any.ShowHuman();
}