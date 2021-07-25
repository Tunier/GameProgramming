#include "Headers.h"
#include "MainUpdate.h"

int main(void)
{
	DWORD dwTime = GetTickCount();

	while (true)
	{
		if (dwTime + 80 < GetTickCount())
		{
			dwTime = GetTickCount();
			system("cls");

			/*Main.Update();
			Main.Render();*/
		}
	}

}