#include <stdio.h>

/* [16진수 1자리는 2진수 4자리 범위를 차지한다]
   2진수 : 컴퓨터에 적합한 숫자
   10진수 : 사람한테 적합한 숫자
   2진수는 작은 숫자도 표현하려면 범위가 커진다
   ex) unsigned를 기준으로
       256 => 11111111
       65536 => 1111111111111111
   그러므로 프로그래밍에서 사용하기가 좋지 않다
   그러므로 16진수를 가지고 표현하면 큰 숫자도 쉽게 표현할 수 있고
   2진수와의 변환이 매우 쉽다.
   그래서 2진수를 주로 다루는 프로그래밍에서는 16진수를 사용한다.
   ex) unsigned를 기준으로
   256 => 0xff
   65536 => 0xffff
*/
void main()
{
	unsigned char val1 = 0x07, val2 = 0x09;
	unsigned char result = 0;
	result = val1 << 4;
	printf("%#x\n", result);
	result = result | val2;
	printf("%#x\n", result);
	printf("%#x\n", result & 0xf0);
	printf("%#x\n", result & 0x0f);
}