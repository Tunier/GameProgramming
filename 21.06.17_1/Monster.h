#pragma once
#include <iostream>

class Monster
{
public:
	Monster();

	int atk; // ���ݷ�
	int def; // ����
	int hp; // ü��
	float exp; // �׿����� ��� ����ġ
	int gold; // �׿����� ��� ���

	void Attack();
	void Damaged(int i);
	void Die();

private:
	float rare_drop; // ���� ��� Ȯ��
	// private : �ܺο��� �����Ҽ� ����
	// ���� �ڱ��ڽŸ� ����Ҽ� �ִ� �����͵��� ����.

	void rareGet();

protected:
	// protected : �ܺο����� �����Ҽ� ����
	// �ڱ��ڽŰ� �ڱ��ڽ��� ��ӹ��� �ڽĵ鸸 ����� �� �ִ� �����͵��� ����
	float deadTime; // ������ ����ð�(���� �������� �ʿ��� �ð�)
};

