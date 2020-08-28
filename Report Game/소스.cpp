#include <iostream>
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <windows.h>
#include <conio.h>

using namespace std;

char board[40][40];

int playerX;
int playerY =0;
int dropStarX;
int dropStarY;
int dropStar2X;
int dropStar2Y=10;
int dropStar3X;
int dropStar3Y=30;
int dropStar4X;
int dropStar4Y = 23;
int dropStar5X;
int dropStar5Y = 9;

int score = 0;
int* rScore = &score;
void gotoxy(int x, int y)

{

	COORD pos = { x, y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}

void PrintGame()
{
	board[39][39] = '\0';
	printf("%s", board);
	
}

void mainMenu()
{
	int select;
	printf("\t========Drop Stars==========\n\n\n");
	printf("\t========1.Start Game========\n\n");
	printf("\t========2.Exit Game=========\n");
	printf("\t\tSelect:");
	scanf_s("%d", &select);
	switch (select)
	{
	case 1:
		PrintGame();
		break;
	case 2:
		exit(0);
		break;
	default :
		system("cls");
		mainMenu();
	}

}
//int Score(int *Score)
//{
//	while (true)
//	{
//		Sleep(1000);
//		Score++;
//	}
//	return *Score;
//	
//}
//void ScoreScreen()
//{
//	printf("忙式式式式式式式式式式式式式式式式式式式式式式忖");
//	printf("弛                      弛");
//	printf("弛                      弛");
//	printf("弛        %d            弛",*rScore);
//	printf("弛                      弛");
//	printf("弛                      弛");
//	printf("戌式式式式式式式式式式式式式式式式式式式式式式戎");
//}

void PlayerDraw()
{
	board[playerX][playerY] = 'P';
}

void ShootingStar()
{
	board[dropStarX][dropStarY] = 'O';
	board[dropStar2X][dropStar2Y] = 'O';
	board[dropStar3X][dropStar3Y] = 'O';
	board[dropStar4X][dropStar4Y] = 'O';
	board[dropStar5X][dropStar5Y] = 'O';
}

void InputKey()
{
	char pressKey;

	if (_kbhit())
	{
		pressKey = _getch();

		switch (pressKey)
		{
		case 75: //left
			playerY--;
			if (playerY < 0)
				playerY = 0;
			break;
		case 77: //right
			playerY++;
			if (playerY > 38)
				playerY = 38;
			break;
		}
	}
}

void StarDrop()
{
	dropStarX++;
	dropStar2X++;
	dropStar3X++;
	dropStar4X++;
	dropStar5X++;

	if (dropStarX > 39)
	{
		dropStarX = 2;
		dropStarY = rand() % 39;
	}
	if (dropStar2X > 39)
	{
		dropStar2X = 2;
		dropStar2Y = rand() % 39;
	}
	if (dropStar3X > 39)
	{
		dropStar3X = 2;
		dropStar3Y = rand() % 39;
	}
	if (dropStar4X > 39)
	{
		dropStar4X = 2;
		dropStar4Y = rand() % 39;
	}
	if (dropStar5X > 39)
	{
		dropStar5X = 2;
		dropStar5Y = rand() % 39;
	}
}


void ClashStar()
{
	if (playerX == dropStarX && playerY == dropStarY)
	{
		system("cls");
		printf("You lose...");
		Sleep(1000);
		system("cls");
		mainMenu();
	}
	if (playerX == dropStar2X && playerY == dropStar2Y)
	{
		system("cls");
		printf("You lose...");
		Sleep(1000);
		system("cls");
		mainMenu();
	}
	if (playerX == dropStar3X && playerY == dropStar3Y)
	{
		system("cls");
		printf("You lose...");
		Sleep(1000);
		system("cls");
		mainMenu();
	}
}

void ClearScreen()
{
	system("cls");

	for (int y = 0; y < 40; y++)
	{
		for (int x = 0; x < 40; x++)
		{
			board[y][x] = ' ';
		}
		
	}
}



void GameMain()
{
	//Input Key
	InputKey();
	//output player
	PlayerDraw();
	//move enemy
	StarDrop();
	ShootingStar();
	//clash
	ClashStar();
	
}
int main()
{
	playerX = 39;
	playerY = 20;
	int dwTime = GetTickCount();
	mainMenu();
	

	while (true)
	{
		if (dwTime + 50 < GetTickCount())
		{
			dwTime = GetTickCount();
			ClearScreen();
			GameMain();
			PrintGame();	
		}
	}
	
	return 0;
}