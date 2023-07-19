#include <iostream>

using namespace std;

/*템플릿의 특징
아래처럼 함수를 만들면 함수를 컴파일러가 바로 인식하지 못한다.

Add<int>(10, 20) 이렇게 호출할 때 T를 int로 정해서 
아래와 같은 함수를 컴파일러는 만든다.
int Add(int a, int b)
{
	returne a+b;
}
즉, 템플릿 함수가 별도로 있는 것이 아닌
자료형이 결정될 때 해당 자료형의 함수를 만들어서 메모리에 올리게 된다.
	cout << Add<int>(10, 20) << endl;
	cout << Add<double>(3.14, 2.45) << endl;
	cout << Add<short>(10, 20) << endl;
	cout << Add<float>(3.14f, 2.45f) << endl;
	cout << Add<long>(9999, 10000) << endl;
이렇게 하면 Add함수가 5개가 메모리에 생긴다.
*/

/*T나 G는 자료형을 가리키는 단어로 1글자 이상 아무글자나 써주면 된다.*/

template<typename T>
T Add(T a, T b)
{
	return a + b;
}

template<typename G>
G Sub(G a, G b)
{
	return a - b;
}

void main()
{
	cout << Add<int>(10, 20) << endl;
	cout << Add<double>(3.14, 2.45) << endl;
	cout << Add<short>(10, 20) << endl;
	cout << Add<float>(3.14f, 2.45f) << endl;
	cout << Add<long>(9999, 10000) << endl;

	/*매개변수 값에 따라 컴파일러가 T를 유추할 수 있으므로 생략도 가능하다.*/
	cout << Add(10, 20) << endl;
	cout << Add(3.14, 2.45) << endl;
}