#include <stdio.h>

/*C���� ������ �Լ��� �����
�Ϲ� �Լ��� ����� �� ����
���� ��ũ�� �Լ��� ���� ����Ѵ�.*/

/*��ũ�� �Լ� ���� �� ������ ��
#define�� �ܼ� ġȯ�̹Ƿ� �Ʒ�ó�� ��ũ�� �Լ��� �ۼ��ϸ�
����� �ǵ����� �ʰ� ���� �� �ִ�.
*/
#define SQRT(x)		x*x			// ��ũ�� �Լ�

double dsqrt(double x)			// �Լ�
{
	return x * x;
}

void main()
{
	/*��ó���⿡ ���� �̷��� �ٲ��.
	printf("%d\n", 100*100);   
	printf("%d\n", -20*-20);
	printf("%.2lf\n", 2.5*2.5);

	printf("%d\n", 4+5*4+5);
	printf("%.2lf\n", 4.2+5.3*4.2+5.3);
	printf("%.2lf\n", dsqrt(4+5));  //�Լ��� ���� �� ���Ǿ� ����
	*/
	printf("%d\n", SQRT(100));   
	printf("%d\n", SQRT(-20));
	printf("%.2lf\n", SQRT(2.5));

	printf("%d\n", SQRT(4+5));
	printf("%.2lf\n", SQRT(4.2+5.3));
	printf("%.2lf\n", dsqrt(4+5));
}