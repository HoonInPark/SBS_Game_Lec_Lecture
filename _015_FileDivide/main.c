#include <stdio.h>
#include "arith.h"
#include "point.h"
#include "arithPoint.h"

/*�ٸ� ���Ͽ� �ִ� ���������� main�Լ����� ����Ϸ���
extern Ű���带 �ٿ��ش�.

���� extern�� �Ⱥٿ��ְ� �Ǹ� �����
������Ʈ�� ���Ե� ��� obj�� ��ġ�Ƿ�
���������� �������� ������ �߻��Ѵ�.

�׷��Ƿ� �ٸ� ���Ͽ� �ִ� ���������� �����ϱ� ���ؼ�
�ߺ������� �ƴ� extern�� �ٿ������ν� �̹� ����� ���������� �����Ѵٴ� �ǹ��̴�.
*/

extern Point pt[2];

void main()
{
	int result = 0;
	result = Add(10, 20);
	printf("%d\n", result);
	result = Sub(10, 20);
	printf("%d\n", result);
	result = Mul(10, 20);
	printf("%d\n", result);
	result = Div(10, 20);
	printf("%d\n", result);

	/*struct _Point ������ ������ �߻��Ѵ�.
	���⼭ 1���� ó���� �� �ؾ� �Ѵ�.
	������?
	#include �� �� struct _Point�� �ߺ� ����Ǿ��� �����̴�.
	*/

	Point ptResult;
	ptResult = AddPoint(&pt[0], &pt[1]);		// pt+0, pt+1
	printf("%d, %d\n", ptResult.x, ptResult.y);
	ptResult = SubPoint(&pt[0], &pt[1]);
	printf("%d, %d\n", ptResult.x, ptResult.y);
	ptResult = MulPoint(&pt[0], &pt[1]);
	printf("%d, %d\n", ptResult.x, ptResult.y);
	ptResult = DivPoint(&pt[0], &pt[1]);
	printf("%d, %d\n", ptResult.x, ptResult.y);
}