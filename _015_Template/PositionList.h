#pragma once

/*C++ Template�� Ư¡��
h(���)�� cpp�� ���� �� ����.
�����Ϸ����� �̷��� ����Ⱑ �ſ� ��ư� ��ȿ�����̴�.
�׷��� 1���� h(���)�� �����.
*/

template<typename T>
class PositionList
{
private:
	T* arr;		// � �ڷ����� �迭�� �����ּ�(�����迭�̸�)
	int len;		// �迭�� ũ��

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
	this->arr = new T[arrLen];		// int�� ������ ������ ���� �迭�� ����
}

template<typename T>
PositionList<T>::~PositionList()
{
	delete[] arr;
}

template<typename T>
bool PositionList<T>::SetPosition(int index, T position)
{
	// �迭�� ������ ����� false
	if (index < 0 || index >= this->len)
		return false;

	this->arr[index] = position;
	return true;
}

template<typename T>
bool PositionList<T>::GetPosition(int index, T& position)
{
	// �迭�� ������ ����� false
	if (index < 0 || index >= this->len)
		return false;

	position = this->arr[index];
	return true;
}
