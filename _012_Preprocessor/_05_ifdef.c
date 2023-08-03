#include <stdio.h>

#define _DEBUG_

/* �Ʒ��� #ifdef _DEBUG_�� �ǹ̴� ������ ����.
* _DEBUG_�� #define�Ǿ� �ִٸ� 
* #endif���� �����Ͽ� ���Խ��Ѷ�.
* 
* ���� _DEBUG_�� #define�Ǿ� ���� �ʴٸ�
* �Ʒ� #ifdef _DEBUG_ ~ #endif ������ ������ �����Ͽ� ���Ե��� �ʰ�
* ������� �ȴ�.
*/

void DebugPrint(char* str)
{
#ifdef _DEBUG_
	printf("%s\n", str);
#endif
}

void main()
{
	int num;
	char str[100];
	printf("���� �Է� >> ");
	scanf_s("%d", &num);
	snprintf(str, sizeof(str), "�Է� ���� = %d", num);
	DebugPrint(str);
}