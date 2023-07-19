#include "Human.h"
#include "ComputerEngineer.h"
#include "Developer.h"
#include "ServerAdministrator.h"

void main()
{
	/*��ü�� Ŭ���� Ÿ�Կ� ���� ���� Ŭ������ Play()�� ȣ��ȴ�.*/
	Human human("ȫ�浿", 24);
	ComputerEngineer comEng("�Ӳ���", 33, 3);
	Developer dev("����", 25, 5, 7);
	ServerAdministrator sa("������", 35, 5, 24);

	cout << "----------------------------------" << endl;
	human.Play();
	comEng.Play();
	dev.Play();
	sa.Play();
	cout << "----------------------------------" << endl;

	/*�ڽİ�ü ������ �θ�ü�� ���ԵǾ� �ִ�.
	�׷��Ƿ� �����Ϸ��� ������ �� �ڽİ�ü�� �θ�Ŭ����������
	������ �� �ֵ��� �������.
	
	�� �� �θ� Ŭ���� ������ �ڽ� ��ü�� ���Ե� �θ�ü�� ����Ű�� �ȴ�.
	�׷��Ƿ� �����Ϸ��� �� �ҽ��ڵ带 �������� ��(����� ��ȯ)
	HumanŬ������ ������ ������ ���� Ȯ���ؼ�
	Play()�� ȣ���� �� HumanŬ������ Play()�� ȣ���Ѵ�.
	*/
	Human* pHuman = &human;
	pHuman->Play();
	pHuman = &comEng;
	pHuman->Play();
	pHuman = &dev;
	pHuman->Play();
	pHuman = &sa;
	pHuman->Play();

	cout << "----------------------------------" << endl;
	/*virtual�� �ٿ��� �Լ��� ������ �� ����� �ٲ��� �ʴ´�.
	������ �� ��ü�� ���ۺκп� virtual table�� �����ϰ�
	�̰��� ��ü�ڽ��� Pleasure()�Լ��� �ּҸ� ����Ѵ�.
	�׷��Ƿ� ������ �� �̸� ���س��� ���� �ƴ϶�
	������ �� ��ü�� �ּҸ� ���� ���ۺκп� ��ġ�� ���� ���̺��� 
	�����ؼ� ��ü�� �ش��ϴ� Pleasure()�Լ��� ȣ���Ѵ�.

	virtual�� �����̶�� �ǹ̰� �ƴ϶� '��ǻ���'��� �ǹ��̴�.
	��, ������ �� ����Ű�� ������ ������ �ڷ����� �ƴ϶�
	������ ������ ��� ���� ��ü�� �����ؼ� ȣ���ϰڴٴ� �ǹ��̴�.

	virtual�Լ��� �����Ƿ� �ؼ� ������
	1) ���ο� ��� Ŭ������ ���� ���� ���� �ڵ忡 �����ϰ� �� �� �ִ�
	2) �׷��� Framework�� ������ �����Դ�.
	��μ� C++�ô뿡 �� Framework ���߹���� �ڸ���� �ȴ�.

	��, C++�� C������ ȣȯ���� �����ϴٺ���
	�����ڵ��� C��������� ���α׷����Ͽ���
	�̰��� ���α׷��� ����� ȥ�縦 �ҷ��ͼ�
	���� Java���� Framework ���� ����� �뼼�� �ȴ�.
	*/

	pHuman = &human;
	pHuman->Pleasure();
	pHuman = &comEng;
	pHuman->Pleasure();
	pHuman = &dev;
	pHuman->Pleasure();
	pHuman = &sa;
	pHuman->Pleasure();

	cout << "----------------------------------" << endl;
}
