#pragma once

/*C++ Template의 특징은
h(헤더)와 cpp로 나눌 수 없다.
컴파일러에서 이렇게 만들기가 매우 어렵고 비효율적이다.
그래서 1개의 h(헤더)로 만든다.
*/

template<typename T>
class PositionList
{
private:
	T* arr;		// 어떤 자료형의 배열의 시작주소(동적배열이름)
	int len;		// 배열의 크기

public:
	PositionList(int arrLen = 100);
	~PositionList();
	bool SetPosition(int index, T position);
	bool GetPosition(int index, T& position);
};

template<typename T>
PositionList<T>::PositionList(int arrLen)
{
	this->len = arrLen;
	this->arr = new T[arrLen];		// int를 여러개 저장할 동적 배열을 생성
}

template<typename T>
PositionList<T>::~PositionList()
{
	delete[] arr;
}

template<typename T>
bool PositionList<T>::SetPosition(int index, T position)
{
	// 배열의 범위를 벗어나면 false
	if (index < 0 || index >= this->len)
		return false;

	this->arr[index] = position;
	return true;
}

template<typename T>
bool PositionList<T>::GetPosition(int index, T& position)
{
	// 배열의 범위를 벗어나면 false
	if (index < 0 || index >= this->len)
		return false;

	position = this->arr[index];
	return true;
}
