#include "human.h"

void Human::PrintInfo(int i)
{
	cout << "�̸� :" << name << endl
		<< "���� :" << age << endl
		<< "Ű:" << height << endl
		<< "������ : " << weight << endl
		<< "���� :" << gender << endl
		<< "��й�ȣ : " << password << endl;
	cout << "�Է��� �Ű������� " << i << "�Դϴ�." << endl;
}

Human::Human()
{
	cout << "�����ƽ��ϴ�.\n";
	name = "NPC1";
	age = 40;
	height = 160.f;
	weight = 50.f;
	gender = 2;
	password = 0000;
	// �Ϲ������� Ŭ�������� ������ �ʱ�ȭ �Ҷ��� 
	// ����� �ƴ϶� �ҽ��ڵ��� �����ڿ��� ���ִ� ��찡 ����.
}

Human::~Human()
{
	cout << "�����˴ϴ�.\n";
}
