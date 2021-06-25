#include "CHero.h"
#include "HpPotion.h"
#include "MpPotion.h"



CHero::CHero()
{
	strcpy(name, "플레이어");
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
	printf("이름 : %s\n", name);
	printf("레벨 : %d\n", level);
	printf("HP : %d\n", hp);
	printf("MP : %d\n", mp);
	printf("힘 : %d\n", str);
	printf("민 : %d\n", dex);
	printf("지 : %d\n", wis);
	printf("경험치 : %.2f\n", exp);
}

int CHero::Attack()
{
	int Damage = str;
	int Critical = rand() % 100;
	// 함수 rand() : 랜덤한 숫자를 만드는 함수로
	// 숫자 범위에 제한이 거의 없기 때문에
	// 만들어지는 숫자를 이용하여 일정 범위 내에서 숫자로 바꿔줄 필요가 있다.
	// 생성된 숫자를 나눠서 나머지 값을 이용하면
	// 숫자의 범위를 제한할수 있다.

	if (Critical < 20)
		Damage *= 2;

	return Damage;
}

void CHero::Damaged(int damage)
{
	int dodge = rand() % 100;
	dodge += dex;
	// 랜덤하게 결정된 회피율에 dex만큼을 더해서 회피율을 보정한다.

	if (dodge >= 80)
	{
		printf("공격을 회피했습니다.\n");
		return;
	}
	hp -= damage;
	printf("%d의 피해를 받았습니다.\n", damage);

	if (hp <= 0)
		Die();
}

void CHero::Die()
{
	printf("체력이 0이되어 플레이어가 사망했습니다.\n");
}

void CHero::LevelUp(int i)
{
	exp += i;
	printf("경험치를 %f 획득했습니다.\n", i);
	printf("현재 경험치는 %f/%f 입니다.\n", exp, (float)level * 10);
	if (exp > level * 10)
	{
		printf("레벨업했습니다.\n");
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
