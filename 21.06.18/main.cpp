#pragma once
#include "Headers.h"
#include "MyPlayer.h"
#include "HpPotion.h"

void AmStudy()
{
	MyPlayer player;
	HpPotion hPotion;

	while (1)
	{
		printf("����� �κ��丮 ��ȣ�� �Է��ϼ���.\n");
		int input;
		char input2;
		scanf(" %d", &input);

		player.UseMyItem(input);
		/*
			1. ���׹̳� ������ ����� �÷��̾��� �κ��丮�� �߰��ؼ�
			   ���׹̳� ������ ����Ͽ� ȿ���� ����Ǵ��� Ȯ���غ���.

			2. ü��/���������� ������ �ø���.
			   �ű� Ŭ������ ������ �ʰ� ���� Ŭ��������
			   ��ġ���� �ٸ��� �����Ҽ� �ֵ��� ������ ���ĺ���.
		*/
		player.CreatePotion();
	}
}

int main()
{
	srand(time(NULL));
	// ������ ���ڸ� ���鶧 ������ �Ǵ� ���� �ٲ��ִ� �Լ�
	// �Ϲ������δ� ���ذ��� ���� �ð����� ��´�.

	// srand�� �ݺ��ؼ� ����ϸ� �Ź� ������ �ٽ� ��� �����ϱ� ������
	// �������� �������� ������ �ʴ´�.
	// ���� ���α׷� ��ü���� �ѹ��� ����Ѵ�.
	// �ѹ��� ����ص� �ٸ� Ŭ�������� ����ϴ� rand�� ������ ��ġ�� ������
	// �� Ŭ�������� srand�� ���� �ʿ�� ����.




	return 0;
}