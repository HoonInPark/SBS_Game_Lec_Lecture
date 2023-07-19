#include "Human.h"
#include <string.h>
#include <iostream>

using namespace std;

/*
* �Ʒ� �����ڸ� ��ó�� ���� �� �ִ�.
* : pName(NULL), age(0), height(0) => ��� �̴ϼȶ����� ����
* ��� �̴ϼȶ����� ������ memset(job, 0, sizeof(job)); ���� ���� ȣ��ȴ�.
Human::Human()
	: pName(NULL), age(0), height(0)
{
	memset(job, 0, sizeof(job));
}
*/
Human::Human()
{
	pName = NULL;
	memset(job, 0, sizeof(job));
	age = 0;
	height = 0;
}

Human::Human(const char* _pName, const char* _job, int _age, float _height)
{
	/*�̸��� ���޵Ǵ� �̸����� ���̰� �ٸ��Ƿ� �׳� �迭�� ������� �ʰ�
	���⼭�� �̸��� ����+1��ŭ �����迭�� �����Ͽ���.
	+1�� �� ������ ���ڿ��� ���� null�� ���� �ϱ� ������*/

	int len = strlen(_pName);	// ���ڿ��� ���̸� ���ϴ� �Լ�
	pName = new char[len + 1];	// Heap�� len+1���̸�ŭ char �迭�� ����
	memset(pName, 0, len + 1);	// ������ ���� �迭�� 0���� �ʱ�ȭ
	strncpy_s(pName, len+1, _pName, len);	// _pName�� ���ڿ��� pName�� len���̸�ŭ ����

	len = strlen(_job);
	len = len < JOB_STR_LEN ? len : JOB_STR_LEN - 1;
	strncpy_s(job, JOB_STR_LEN, _job, len);
	job[len] = '\0';		// ���ڿ��� ���� null�� �߰�
	age = _age;
	height = _height;
}

/*�Ʒ� ��������ڸ� ���� �������� ������
�����Ϸ��� �ڵ����� Default ���� �����ڸ� �߰��Ѵ�
// �����Ϸ��� �������ִ� ���� ������(��ü���� ��� �������� �����ϰ� �����Ѵ�)
Human::Human(Human& human)
{
	// pName���� human��ü�� pName�� �ּҰ� ����ȴ�.
	// �׷��Ƿ� �Ҹ��ڿ��� hong�� any�� 2�� delete�ϴµ�
	// �̹� hong���� pName�� delete�Ǿ����Ƿ� any�Ҹ��ڰ�
	// delete�� �� ������ �߻��Ѵ�.
	pName = human.pName;	
	strncpy_s(job, sizeof(job), human.job, sizeof(human.job));
	age = human.age;
	height = human.height;
}
*/

// ���� ������ ���������
// Human any = hong;
Human::Human(Human& human)
{
	int len = strlen(human.pName);
	pName = new char[len + 1];
	memset(pName, 0, len + 1);
	strncpy_s(pName, len + 1, human.pName, len);

	len = strlen(human.job);
	len = len < JOB_STR_LEN ? len : JOB_STR_LEN - 1;
	strncpy_s(job, JOB_STR_LEN, human.job, len);
	job[len] = '\0';
	age = human.age;
	height = human.height;
}

Human::~Human()
{
	delete[] pName;
}

void Human::ShowHuman()
{
	cout << "Name : " << pName << endl;
	cout << "Job : " << job << endl;
	cout << "Age : " << age << endl;
	cout << "Height : " << height << endl << endl;
}
