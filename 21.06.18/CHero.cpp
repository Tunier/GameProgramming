#include "CHero.h"
#include "HpPotion.h"
#include "MpPotion.h"



CHero::CHero()
{
	strcpy(name, "�÷��̾�");
	level = 1;
	str = 5;
	dex = 5;
	wis = 5;
	hp = 20;
	mp = 10;
	mHp = hp;
	mMp = mp;
	exp = 0;
	inventory[0] = new HpPotion;
	for (int i = 1; i < 5; i++)
		inventory[i] = NULL;
}

CHero::CHero(char _name[256])
{
	strcpy(name, _name);
	level = 1;
	str = 5;
	dex = 5;
	wis = 5;
	hp = 20;
	mp = 10;
	mHp = hp;
	mMp = mp;
	exp = 0;
	inventory[0] = new HpPotion;
	for (int i = 1; i < 5; i++)
		inventory[i] = NULL;
}

void CHero::Info()
{
	printf("�̸� : %s\n", name);
	printf("���� : %d\n", level);
	printf("HP : %d\n", hp);
	printf("MP : %d\n", mp);
	printf("�� : %d\n", str);
	printf("�� : %d\n", dex);
	printf("�� : %d\n", wis);
	printf("����ġ : %.2f\n", exp);
}

int CHero::Attack()
{
	int Damage = str;
	int Critical = rand() % 100;
	// �Լ� rand() : ������ ���ڸ� ����� �Լ���
	// ���� ������ ������ ���� ���� ������
	// ��������� ���ڸ� �̿��Ͽ� ���� ���� ������ ���ڷ� �ٲ��� �ʿ䰡 �ִ�.
	// ������ ���ڸ� ������ ������ ���� �̿��ϸ�
	// ������ ������ �����Ҽ� �ִ�.

	if (Critical < 20)
		Damage *= 2;

	return Damage;
}

void CHero::Damaged(int damage)
{
	int dodge = rand() % 100;
	dodge += dex;
	// �����ϰ� ������ ȸ������ dex��ŭ�� ���ؼ� ȸ������ �����Ѵ�.

	if (dodge >= 80)
	{
		printf("������ ȸ���߽��ϴ�.\n");
		return;
	}
	hp -= damage;
	printf("%d�� ���ظ� �޾ҽ��ϴ�.\n", damage);

	if (hp <= 0)
		Die();
}

void CHero::Die()
{
	printf("ü���� 0�̵Ǿ� �÷��̾ ����߽��ϴ�.\n");
}

void CHero::LevelUp(int i)
{
	exp += i;
	printf("����ġ�� %f ȹ���߽��ϴ�.\n", i);
	printf("���� ����ġ�� %f/%f �Դϴ�.\n", exp, (float)level * 10);
	if (exp > level * 10)
	{
		printf("�������߽��ϴ�.\n");
		exp -= level * 10;
		mHp = 10 * level + 10;
		mMp = 5 * level + 5;
		str += 2;
		dex += 2;
		wis += 2;
		hp = mHp;
		mp = mMp;
		level++;
	}
}

int CHero::Skill(int i)
{
	return 0;
}
