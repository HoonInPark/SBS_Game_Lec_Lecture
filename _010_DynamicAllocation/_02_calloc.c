#include <stdio.h>
#include <stdlib.h>

#define KOR_NUM		3

void main()
{
	/*
	* �����Ҵ��ϰ� ���� �Ҵ��� ��� �޸𸮸� 0���� �ʱ�ȭ�Ѵ�.
	* �Ʒ� 2���� �ڵ�� calloc�� 1�ٰ� ������ �ڵ��̴�.
	int* pKor = (int*)malloc(KOR_NUM * sizeof(int)); ���⼭�� �޸𸮸� �󸶳� �Ҵ������� �������� ��, �޸� �� ��� ��ġ�ϴ����� �������� �ʾҴ�. �׷��� ��ǻ�ʹ� ������ �ٸ� ������ ����ߴ� �ּ� ���� ����ִ´�. memset�� ���� ������ ������ �ּҰ��� ������ �ȴ�. �̰� �������� ������ ���̴�.
	memset(pKor, 0, sizeof(int)*KOR_NUM); �׷��� �� ��� ���� pKor�� �޸� ���� ��ġ�� 0���� �ʱ�ȭ���ְ�, �ű⼭���� �󸶸�ŭ�� �� ������ �����ϴ� ���������� �˰��� sizeof(int)*KOR_NUM�� ���ش�.
	*/
	int* pKor = (int*)calloc(KOR_NUM, sizeof(int)); // calloc�� ���� �Ǹ�, �ּ� ���� ������ ���� �ƴ� ���� ������ �����ش�. (��õ!)
	for (int i = 0;i < KOR_NUM;i++)
	{
		printf("%d��° ���� ���� �Է� >> ", i + 1);
		scanf_s("%d", &pKor[i]);   // (pKor + i)
	}
	printf("\n");

	for (int i = 0;i < KOR_NUM;i++)
	{
		printf("%d��° ���� ���� : %d\n", i + 1, pKor[i]);
	}

	free(pKor);
}