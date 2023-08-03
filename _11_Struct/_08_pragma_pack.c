#include <stdio.h>

/* �Ʒ��� ����ü�� ��� ������ �޸𸮿� �ø� ��
*  �� ������ ������ 1byte������ ������ �����϶�� �ǹ��̴�.
* �̷��� �ϸ� St1�� St2�� �޸𸮻��� ũ�Ⱑ �����ϰ� �ȴ�.
* 
* �ַ� ����ü�� char�迭�� ��ȯ�Ͽ� ��������� ���� �������� ������ ��
* �� ó���� ����, Ŭ���̾�Ʈ�� ���� ������
* ���� ������ Ŭ���̾�Ʈ�� ����ü ���� ũ�Ⱑ �ٸ� ���
* �������� ������ �ۼ����� �ȵȴ�.
* 
* Ư�� �� ���� Machine�� ��� ���� �߻��Ѵ�.
* PC <-> �Ӻ����HW, x86 <-> x64
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
	printf("St1�� ũ�� : %d\n", sizeof(St1));	// 16byte
	printf("St2�� ũ�� : %d\n", sizeof(St2));	// 24byte
}
