
#include <iostream>
#include <list>

using namespace std;
/*
* ����Ʈ: ������ �����ϴ� ����
* 1) �迭����: ������ ����������, ����/������ ������. 
*			�߰��� ������ �� ��� �ڿ� �ִ� �����͸� 
			������ ��ܾ� �Ѵ�. ���� ������ �ٷ� ����,
			���� ���� �����̴�.
* 2) ���Ḯ��Ʈ: �߰� ���Խ� ��带 �߰��Ͽ� ���� ����Ű�� 
*			��ġ�� �ڰ� ����Ű�� ��ġ�� ������ �ָ� �ȴ�.
*			�߰� ������ ���� ����Ű�� ��ġ�� �ڿ� ������
*			������ �ָ� �ȴ�. ���� ����/���� �ӵ��� ����.
*/
void main()
{
	list<int> linked_list;
	for(int i=0;i<6;i++)
		linked_list.push_back(i);

	// 1��° �������� �����͸� ����
	list<int>::iterator it = linked_list.begin();

	// 2��° �����ͷ� ������ �̵�
	++it;

	// ���ο� �����͸� 2��° ������ �տ� ����
	linked_list.insert(it, 10);

	// iter�� ����Ű�� �ִ�, 2��°���� �����͸� ����
	linked_list.erase(it);

	// ��ü �����͸� ���
	it = linked_list.begin();
	while(it!=linked_list.end())
		cout << *it++ << endl;
}