#include <stdio.h>
#include "arith.h"
#include "point.h"
#include "arithPoint.h"

/*다른 파일에 있는 전역변수를 main함수에서 사용하려면
extern 키워드를 붙여준다.

만약 extern을 안붙여주게 되면 빌드시
프로젝트에 포함된 모든 obj를 합치므로
전역변수의 재정의의 오류가 발생한다.

그러므로 다른 파일에 있는 전역변수를 접근하기 위해서
중복선언이 아닌 extern을 붙여줌으로써 이미 선언된 전역변수를 접근한다는 의미이다.
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

	/*struct _Point 재정의 오류가 발생한다.
	여기서 1가지 처리를 더 해야 한다.
	이유는?
	#include 할 때 struct _Point가 중복 선언되었기 때문이다.
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