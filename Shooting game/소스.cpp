#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <windows.h>
#include <conio.h>

using namespace std;

#define PLAYER_BULLET_MAX 20

struct Bullet
{
	int x;
	int y;
	bool fire;
};

char board[25][80];

int playerX;
int playerY;

int enemyX;
int enemyY;

Bullet playerBullet[PLAYER_BULLET_MAX];

void ClearScreen();
void GameMain();
void PrintScreen();
void KeyControl();
void BulletDraw();
void PlayerDraw();
void EnemyDraw();
void EnemyMove();
void ClashEnemyAndBullet();



int main()
{
	playerX = 0;
	playerY = 12;

	enemyX = 77;
	enemyY = 12;

	for (int i = 0; i < PLAYER_BULLET_MAX; i++)
	{
		playerBullet[i].x = 0;
		playerBullet[i].y = 0;
		playerBullet[i].fire = false;
	}

	int dwTime = GetTickCount(); // 1sec

	while (true)
	{
		if (dwTime + 50 < GetTickCount())
		{
			dwTime = GetTickCount();
			//clear function
			ClearScreen();
			//moving player and enemy
			GameMain();
			//Print function
			PrintScreen();
		}
	}

	return 0;
}

void ClearScreen()
{
	system("cls");

	for (int y = 0; y < 25; y++)
	{
		for (int x = 0; x < 80; x++)
		{
			board[y][x] = ' ';
		}
	}
}

void GameMain()
{
	//Input Key
	KeyControl();
	//Shot bullet
	BulletDraw();
	//output player
	PlayerDraw();
	//move enemy
	EnemyMove();
	EnemyDraw();
	//clash
	ClashEnemyAndBullet();
}

void PrintScreen()
{
	board[24][79] = '\0';
	printf("%s", board);
}
void KeyControl()
{
	char pressKey;

	if (_kbhit())
	{
		pressKey = _getch();

		switch (pressKey)
		{
		case 72: //up in keyboard
			playerY--;
			if (playerY < 0)
				playerY = 0;
			break;
		case 75: //left
			playerX--;
			if (playerX < 0)
				playerX = 0;
			break;
		case 77: //right
			playerX++;
			if (playerX > 75)
				playerX = 75;
			break;
		case 80: //down
			playerY++;
			if (playerY > 23)
				playerY = 23;
			break;
		case 32: //spacebar
			for (int i = 0; i < PLAYER_BULLET_MAX; i++)
			{
				if (playerBullet[i].fire == false)
				{
					playerBullet[i].fire = true;
					playerBullet[i].x = playerX+5;
					playerBullet[i].y = playerY;
					break;
				}
			}
			break;
		}
	}
}
void BulletDraw()
{
	for (int i = 0; i < PLAYER_BULLET_MAX; i++)
	{
		if (playerBullet[i].fire == true)
		{
			board[playerBullet[i].y][playerBullet[i].x - 1] = '-';
			board[playerBullet[i].y][playerBullet[i].x + 0] = '>';
			playerBullet[i].x++;

			if (playerBullet[i].x > 78)
			{
				playerBullet[i].fire = false;
			}
		}
	}
}
void PlayerDraw()
{
	board[playerY + 0][playerX + 1] = '=';
	board[playerY + 0][playerX + 2] = '>';
	board[playerY + 0][playerX + 3] = '>';
	board[playerY + 1][playerX + 0] = '-';
	board[playerY + 1][playerX + 1] = '>';
	board[playerY - 1][playerX + 0] = '-';
	board[playerY - 1][playerX + 1] = '>';
}
void EnemyDraw()
{
	board[enemyY - 0][enemyX - 2] ='<';
	board[enemyY - 0][enemyX - 1] ='-';
	board[enemyY - 0][enemyX - 0] ='O';
	board[enemyY - 0][enemyX + 1] ='-';
	board[enemyY - 0][enemyX + 2] ='>';
}
void EnemyMove()
{
	enemyX--;

	if (enemyX < 2)
	{
		enemyX = 77;
		enemyY = (rand() % 22);
	}
}
void ClashEnemyAndBullet()
{
	for (int i = 0; i < PLAYER_BULLET_MAX ; i++)
	{
		if (playerBullet[i].fire ==true)
		{
			if (playerBullet[i].y == enemyY)
			{
				if (playerBullet[i].x >= enemyX -1 && playerBullet[i].x <= (enemyX +1))
				{
					enemyX = 77;
					enemyY = (rand() % 22) + 2;
					playerBullet[i].fire = false;
				}
			}
		}
	}
}