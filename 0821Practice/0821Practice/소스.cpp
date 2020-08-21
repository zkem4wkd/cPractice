#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;
int main() {

	printf("Random Encount \n");

	//Moving
	int x = 0, y = 0;
	char i = 0;
	int n = 0 , hp = 20;
	int e1_hp = 10;
	int e2_hp = 20;
	int e3_hp = 15;
	int e4_hp = 30;

	srand(time(NULL));
	int random1 = rand() % 10;
	int random2 = rand() % 10;
	int random3 = rand() % 10;
	int random4 = rand() % 10;
	int random5 = rand() % 10;

	while (hp >=0 )
	{
		printf("X:%d , Y:%d (My Hp : %d)\n", x, y,hp);
		printf("Input (w,a,s,d): ");
		scanf(" %c", &i);
		if (random1 == x)
		{
			Enemy1:
			printf("Encountered an Goblin!(hp:%d)\n",e1_hp);
			printf("Choose your action (My Hp : %d)\n",hp);
			printf("1.Attack 2.Run\n");
			scanf("%d", &n);
			switch(n)
			{
			case 1: printf("You attack enemy!\n");
				Sleep(600);
			    printf("Enemy takes 5 damage!\n");
				e1_hp -= 5;
				Sleep(500);
				printf("Enemy's hp : %d\n", e1_hp);
				Sleep(500);
				if (e1_hp == 0)
				{
					printf("You Win !\n");
					Sleep(800);
					system("cls");
					e1_hp = 10;
					random1 = rand() % 10;
					continue;
				}
				printf("Enemy's attack!\n");
				Sleep(500);
				printf("You damaged 5 !\n", hp);
				Sleep(300);
				hp -= 5;
				Sleep(700);
				system("cls");
				if (hp <= 0)
				{
					break;
				}
				goto Enemy1;

			case 2: printf("You run away\n");
				Sleep(700);
				system("cls");
				random1 = rand() % 10;
				continue;

			default: printf("Command Error\n");
				continue;
			}
			
			

		}
		if (random2 == y)
		{
		Enemy2:
			printf("Encountered an Slime!(hp:%d)\n", e2_hp);
			printf("Choose your action (My Hp : %d)\n", hp);
			printf("1.Attack 2.Run\n");
			scanf("%d", &n);
			switch (n)
			{
			case 1: printf("You attack enemy!\n");
				Sleep(600);
				printf("Enemy takes 5 damage!\n");
				e2_hp -= 5;
				Sleep(500);
				printf("Enemy's hp : %d\n", e2_hp);
				Sleep(500);
				if (e2_hp == 0)
				{
					printf("You Win !\n");
					Sleep(800);
					system("cls");
					e2_hp = 20;
					
					random2 = rand() % 10;
					continue;
				}
				printf("Enemy's attack!\n");
				Sleep(500);
				printf("You damaged 3 !\n", hp);
				Sleep(300);
				hp -= 3;
				Sleep(700);
				system("cls");
				if (hp <= 0)
				{
					break;
				}
				goto Enemy2;
				
			case 2: printf("You run away\n");
				Sleep(700);
				system("cls");
				random2 = rand() % 10;
				continue;

			default: printf("Command Error\n");
				continue;
			}


		}
		else if (i == 'w')
		{
			y += 1;
			system("cls");
			continue;
		}
		else if (i == 's')
		{
			y -= 1;
			system("cls");
			continue;
		}
		else if (i == 'a')
		{
			x -= 1;
			system("cls");
			continue;
		}
		else if (i == 'd')
		{
			x += 1;
			system("cls");
			continue;
		}
		else
		{
			printf("Error Command\n");
		}

	}
	printf("you died\n");
}