#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;
void main125(void)
{
	printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
	printf("早       UNITY RPG 2020         早\n");
	printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");

	system("pause");
	system("cls");

	int a = 0 ,b=0;
	int money = 300;
	printf("1.Warrior 2.Archer 3.Magician\n");
	printf("Select your job : ");
	scanf("%d", &a);
	if (a == 1)
	{
		printf("your job is 'Warrior' ");
		Sleep(1000);
		system("cls");
	}
	else if (a == 2)
	{
		printf("your job is 'Archer' ");
		Sleep(1000);
		system("cls");
	}
	else if (a == 3)
	{
		printf("your job is 'Magician' ");
		Sleep(1000);
		system("cls");
	}
	else
	{
		printf("Command Error.");
		exit(0);
	}
	
	printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
	printf("早               SHOP           早\n");
	printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");
	printf("1.Potion		 : 10G\n");
	printf("2.Sword			 : 100G\n");
	printf("3.Bow			 : 100G\n");
	printf("4.Magic Stick           : 100G\n");
	scanf("%d", &b);
	if (b == 1)
	{
		printf("you bought posion \n");
		printf("-10G \n");
		money -= 10;
		printf("now money is %d", money);
		Sleep(1000);
		system("cls");
	}
	if (b == 2)
	{
		printf("you bought Sword \n");
		printf("-100G \n");
		money -= 100;
		printf("now money is %d", money);
		Sleep(1000);
		system("cls");
	}
	if (b == 3)
	{
		printf("you bought Bow \n");
		printf("-100G \n");
		money -= 100;
		printf("now money is %d", money);
		Sleep(1000);
		system("cls");
	}
	if (b == 4)
	{
		printf("you bought Magic Stick \n");
		printf("-100G \n");
		money -= 100;
		printf("now money is %d", money);
		Sleep(1000);
		system("cls");
	}
	else if(b > 4 || b < 1)
	{
		printf("Command Error");
		exit(0);
	}

	int c;
	int p_hp = 100;
	int e_hp = 10;
	
	printf("You encount Enemy !\n");
	Sleep(600);
	printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
	printf("早       Slime(Lv1)   HP :%d    早\n",e_hp);
	printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");
	printf("What do you going to do?\n");
	printf("Hp : %d\n", p_hp);
	printf("1.Attack 2.Guard 3.Run\n");
	printf("Select : ");
	scanf("%d", &c);

	if (c == 1)
	{
		printf("You attack to Enemy !\n");
		Sleep(200);
		printf("Enemy takes 5 damaged\n");
		Sleep(500);
		e_hp -= 5;
		printf("Enemy's Hp is %d\n", e_hp);
		Sleep(800);
	}
	else if (c == 2)
	{
		printf("You attacked by Enemy !\n");
		Sleep(200);
		printf("you takes 5 damaged\n");
		Sleep(500);
		p_hp -= 5;
		printf("now your Hp is %d\n", p_hp);
		Sleep(800);
	}
	else if (c == 3)
	{
		printf("You escaped battle\n");
		Sleep(700);
		system("cls");
		printf("You Lose");
		exit(0);
	}
	else
	{
		printf("Command Error");
		exit(0);
	}

	printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
	printf("早       Slime(Lv1)   HP :%d    早\n", e_hp);
	printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");
	printf("What do you going to do?\n");
	printf("Hp : %d\n", p_hp);
	printf("1.Attack 2.Guard 3.Run\n");
	printf("Select : ");
	scanf("%d", &c);

	if (c == 1)
	{
		printf("You attack to Enemy !\n");
		Sleep(500);
		printf("Enemy takes 5 damaged\n");
		Sleep(500);
		e_hp -= 5;
		printf("Enemy's Hp is %d\n", e_hp);
		Sleep(800);
		if (e_hp == 0)
		{
			printf("You win and you get items !\n");
			Sleep(700);
			money += 5;
			printf("+5 golds\n your money : %d\n",money);
			Sleep(800);
			printf("You Win!");
		}
	}
	else if (c == 2)
	{
		printf("You attacked by Enemy !\n");
		Sleep(200);
		printf("you takes 95 damaged\n");
		Sleep(500);
		p_hp -= 95;
		printf("now your Hp is %d\n", p_hp);
		Sleep(800);
		if (p_hp == 0)
		{
			printf("You Lose");
			Sleep(500);
			exit(0);
		}
	}
	else if (c == 3)
	{
		printf("You escaped battle\n");
		Sleep(700);
		system("cls\n");
		printf("You Lose");
		exit(0);
	}
	else
	{
		printf("Command Error");
		exit(0);
	}

}
	