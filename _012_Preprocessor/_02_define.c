#include <stdio.h>

/*��ó�� �ܰ迡��
�ҽ��ڵ忡�� PI��� �Ǿ��ִ� ���ڿ��� ã�Ƽ� 
��� 3.14ġȯ�Ѵ�.

�׸��� ������ �ܰ�� �Ѱ��ش�.
*/
#define PI	3.14

void main()
{
	float rad, area, length;
	printf("������ �Է� >> ");
	scanf_s("%f", &rad);
	/*��ó���⿡ ���� �Ʒ�ó�� ġȯ�ǰ� ������ �ܰ�� �Ѿ��.
	area = rad * rad * 3.14;
	length = rad * 2 * 3.14;
	*/
	area = rad * rad * PI;
	length = rad * 2 * PI;
	printf("������ %.2f�� ���� ���̴� %.2f�Դϴ�\n", rad, area);
	printf("������ %.2f�� ���� ���̴� %.2f�Դϴ�\n", rad, length);
}