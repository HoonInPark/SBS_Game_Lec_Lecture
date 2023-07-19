#pragma once

#define JOB_STR_LEN		50

class Human
{
private:
	char* pName;
	char job[JOB_STR_LEN];
	int age;
	float height;

public:
	Human();	
	Human(const char* _pName, const char* _job, int _age, float _height);
	/*����Ʈ ��������ڴ� ��ü�� ������� �״�� �����Ѵ�.
	�׷��� ��������߿� �����ڿ��� �����Ҵ��ϴ� ����� ���� ����
	�ݵ�� ��������ڸ� ������ ����� �Ѵ�.
	�׷��� �Ҹ��ڿ��� �̹� ������ �޸𸮸� �� �����ϴ� ������
	���� �� �ִ�.*/
	Human(Human& human);		// ���� ������
	~Human();
	void ShowHuman();
};