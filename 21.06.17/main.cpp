#include "Header.h"

#include "CPlayer.h"
#include "Calculater.h"
#include "CUser.h"

int main()
{
	CPlayer cp;

	cp.print(5.55f);
	cp.print(10);
	cp.print('Q');
	// �Ű������� ������ �ִ��Ŀ� ���� ���� �̸��� �Լ��� ������ ����Ǵ� �Լ��� �޶�����.

	cp.print(3, 9, 20);
	cp.print(99, 3.14f, 'p');
	cp.print(666, 777);

	cp.print((float)10);
	// �μ��� �Ǽ��� �ٲ�� ������ �Ű������� �Ǽ��� �Լ��� ����ȴ�.

	/*
		���ο� Ŭ������ ����� �Ű������� ���� 2���� ù��° ���� �ι����� ����
		���������� �������� ����ϴ� �Լ�.

		�Ű������� �Ǽ� 2���� ù��° ���� �ι�° ���� ���� ���� ����ϴ� �Լ�.

		�Ű������� �Ǽ� 3���� �� ������ ����� ����ϴ� �Լ�.

		�Ű������� ���� 3���� �� ������ ���� ū ���� ����ϴ� �Լ�.

		�Ű������� ������ ���ڸ� �ش� ���ڸ� ������ ��ŭ �ݺ��ؼ� ����ϴ� �Լ�.
	*/

	Calculater Cal;

	Cal.print(2, 3);
	Cal.print(6.2f, 3.1f);
	Cal.print(2.5f, 3.5f, 4.5f);
	Cal.print(5, 15, 3);
	Cal.print(5, 'C');

	CUser user;

	user.printInfo();
	user.useItem(1);
	user.useItem(2);
	user.useItem(3);
	user.printInfo();







	return 0;
}