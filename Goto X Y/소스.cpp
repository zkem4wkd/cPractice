#include <iostream>
#include <windows.h>
#include <conio.h>


int PlayerX = 12;
int PlayerY = 12;

void gotoxy(int x, int y)

{

	COORD pos = { x, y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}

void Keycontrol()
{
	char pressKey;

	if (_kbhit())
	{
		pressKey = _getch();

		switch(pressKey)
		{
		case 72:
			PlayerY--;
			break;
		case 75:
			PlayerX--;
			break;
		case 77:
			PlayerX++;
			break;
		case 80:
			PlayerY++;
			break;
		case 32:
			break;
		}
	}
}

int main()
{
	
	while (true)
	{
		Keycontrol();
		system("cls");
		gotoxy(PlayerX, PlayerY);
		printf("●");
	}

	return 0;
}