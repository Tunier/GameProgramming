#pragma once
#include "Monster.h"

class Dragon : public Monster
{
public:
	Dragon();
	
	void Attack();
	// �Լ� ���� ������(over writing)
	// �θ�Ŭ������ �̹� �����ϴ� attack�Լ���
	// �ڽ�Ŭ������ �巡�￡�� �ٽ� �����ϰ� ������.
	// �ڽ��� �θ��� ����, �Լ��� ����Ҽ� ������
	// �θ�� �ڽ��� ����, �Լ��� ����Ҽ� ����.
};

