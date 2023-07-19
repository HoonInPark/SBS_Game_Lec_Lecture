#include <iostream>
using namespace std;

class Theater
{
private:
	// Ŭ���� �Ҽ����� ��� ��ü�� �����ϴ� ����
	// �ƹ��� ��ü�� ���� ���� �� 1���� ������ �����ȴ�.
	static int enterCount;
	// ��ü ���� ������ŭ ��ü���� ����(������� = �ʵ�)
	char name[30];
	int seat;

public:
	Theater(const char* pName, int _seat)
		:seat(_seat)
	{
		strncpy_s(name, sizeof(name), pName, strlen(pName));
	}
	~Theater(){}

public:
	static void AddEnterCount()
	{
		enterCount++;
	}
	static int GetEnterCount()
	{
		return enterCount;
	}
	void ShowTheater()
	{
		cout << "����� : " << name << endl;
		cout << "�¼��� : " << seat << endl;
	}
};

// static ������ �ʱ�ȭ(private�̶� �ʱ�ȭ�� ���Ѿ� �ϹǷ� �̷��� ���)
int Theater::enterCount = 0;

void main()
{
	Theater th0("����CGV", 3000);
	th0.ShowTheater();

	Theater th1("��CGV", 2000);
	th1.ShowTheater();

	Theater th2("����CGV", 3500);
	th2.ShowTheater();

	for (int i = 0; i < 500;i++)
		th0.AddEnterCount();
	for (int i = 0; i < 1500;i++)
		th1.AddEnterCount();
	for (int i = 0; i < 2500;i++)
		th2.AddEnterCount();
	/*
	* C++�� static����� ��üorŬ���� �Ѵٸ� �̿��� ����� �� �ֵ��� ������
	* Java/C#������ static�� ��������� Ŭ���� �Ҽ��̹Ƿ� �ݵ�� 
	* Ŭ������ ���ؼ��� �����ϰ� �Ͽ���.
	* 
	* ���� �ڵ�� �� �ڵ�� ����� �����ϴ�.
	for (int i = 0; i < 500;i++)
		Theater::AddEnterCount();
	for (int i = 0; i < 1500;i++)
		Theater::AddEnterCount();
	for (int i = 0; i < 2500;i++)
		Theater::AddEnterCount();
	*/
	/*static�� Ŭ���� */
	cout << "��� ������ ���� ���� ���� " << Theater::GetEnterCount() << endl;
}