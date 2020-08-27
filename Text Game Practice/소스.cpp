#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <windows.h>

int Job_Plag = 0;

char Player_job[40] = {' '};
char P_job1[40] = "Warrior";
char P_job2[40] = "Thief";
char P_job3[40] = "Magician";

int P_Hp = 1;
int P_Atk = 0;

int M_Hp = 1;
int M_Atk = 0;

int EncountRand = 0;
char Monster_Name[50] = {};
char Monster1_Name[40] = "Bat";
char Monster2_Name[40] = "Worm";
char Monster3_Name[40] = "Kobolt";
char Monster4_Name[40] = "Flog";
char Monster5_Name[40] = "JellyBee";

void dStart();
void Encount_Monster();
void dBattle();


int main()
{
	printf("1.Warrior 2.Thief 3.Magician \n");
	printf("Select your job : ");
	scanf_s("%d", &Job_Plag);

	system("cls");

	switch (Job_Plag)
	{
	case 1:
		strcpy_s(Player_job, strlen(P_job1)+1,P_job1);
		printf("You are %s\n",Player_job);
		P_Hp = 100;
		P_Atk = 25;
		printf("Hp is %d , Atk is %d\n", P_Hp, P_Atk);
		break;
	case 2:
		strcpy_s(Player_job, strlen(P_job2) + 1, P_job2);
		printf("You are %s\n", Player_job);
		P_Hp = 80;
		P_Atk = 35;
		printf("Hp is %d , Atk is %d\n", P_Hp, P_Atk);
		break;
	case 3:
		strcpy_s(Player_job, strlen(P_job3) + 1, P_job3);
		printf("You are %s\n", Player_job);
		P_Hp = 60;
		P_Atk = 40;
		printf("Hp is %d , Atk is %d\n", P_Hp, P_Atk);
		break;
		default:
			printf("Error code");
			main();
			break;
	}

	Sleep(2000);
	system("cls");

	printf("\n[Job]:%s \n Hp : %d  / Atk : %d",Player_job,P_Hp , P_Atk);

	dStart();

	return 0;
}

void dStart()
{
	int D_Plag;
	system("cls");
	printf("You are %s\n", Player_job);

	printf("Hp is %d , Atk is %d\n", P_Hp, P_Atk);

	printf("--------------------------------------------\n");

	printf("Enter the dungeon\n1.Enter 2.Exit\n");

	scanf_s("%d", &D_Plag);

	switch (D_Plag)
	{
	case 1:
		Encount_Monster();
		break;
	case 2:
		printf("Game End\n");
		Sleep(500);
		break;
	default :
		printf("Command Error");
		dStart();
		break;
	}

}

void Encount_Monster()
{
	system("cls");
	printf("You arrived Dungeon\n");

	Sleep(2000);

	system("cls");

	srand((unsigned int)time(0));

	EncountRand = rand() % 5+1;

	if (EncountRand == 1)
	{
		strcpy_s(Monster_Name, strlen(Monster1_Name)+1, Monster1_Name);
		M_Hp = 50;
		M_Atk = 5;
		printf("Enemy Encounted %s\n", Monster_Name);
		printf("Hp : %d , Atk : %d", M_Hp, M_Atk);
	}
	else if (EncountRand == 2)
	{
		strcpy_s(Monster_Name, strlen(Monster2_Name) + 1, Monster2_Name);
		M_Hp = 30;
		M_Atk = 8;
		printf("Enemy Encounted %s\n", Monster_Name);
		printf("Hp : %d , Atk : %d", M_Hp, M_Atk);
	}
	else if (EncountRand == 3)
	{
		strcpy_s(Monster_Name, strlen(Monster3_Name) + 1, Monster3_Name);
		M_Hp = 50;
		M_Atk = 10;
		printf("Enemy Encounted %s\n", Monster_Name);
		printf("Hp : %d , Atk : %d", M_Hp, M_Atk);
	}
	else if (EncountRand == 4)
	{
		strcpy_s(Monster_Name, strlen(Monster4_Name) + 1, Monster4_Name);
		M_Hp = 20;
		M_Atk = 5;
		printf("Enemy Encounted %s\n", Monster_Name);
		printf("Hp : %d , Atk : %d", M_Hp, M_Atk);
	}
	else if (EncountRand == 5)
	{
		strcpy_s(Monster_Name, strlen(Monster5_Name) + 1, Monster5_Name);
		M_Hp = 40;
		M_Atk = 7;
		printf("Enemy Encounted %s\n", Monster_Name);
		printf("Hp : %d , Atk : %d", M_Hp, M_Atk);
	}

	Sleep(1000);
	dBattle();
}

void dBattle()
{

	int Player_turn = 1;
	int Monster_ai = 0;
	int num = 0;

	system("cls");

	printf("%s / Hp : %d , Atk : %d\n", Player_job, P_Hp, P_Atk);

	printf("\n\n\n ----------------------------VS----------------------------\n\n");

	printf("[Name] : %s\n[Hp] : %d [Atk] : %d\n", Monster_Name, M_Hp, M_Atk);

	if (Player_turn == 1)
	{
		printf("What do you do? 1.Attack 2.Nothing \n");

		scanf_s("%d", &num);
		if (num == 1)
		{
			printf("You attacked %s\n", Monster_Name);
			M_Hp -= P_Atk;
			Sleep(300);
			printf("%s is %d damaged\n", Monster_Name, P_Atk);
		}
		else if (num == 2)
		{
			printf("You didn't do anything\n");
		}
		else
		{
			printf("Command Error");
			Sleep(500);
			system("cls");
			dBattle();
		}
		Player_turn = 0;
	}
	Sleep(800);

	system("cls");

	printf("%s / Hp : %d , Atk : %d\n", Player_job, P_Hp, P_Atk);

	printf("\n\n\n ----------------------------VS----------------------------\n\n");

	printf("[Name] : %s\n[Hp] : %d [Atk] : %d\n", Monster_Name, M_Hp, M_Atk);

	if (Player_turn == 0)
	{
		printf("%s's turn\n", Monster_Name);
		Monster_ai = rand() % 5 + 1;
		Sleep(500);
		if (Monster_ai != 1) // 80%
		{
			printf("%s is attack to you \n", Monster_Name);
			P_Hp -= M_Atk;
			printf("You take %d damaged\n", M_Atk);
		}
		else if (Monster_ai == 1) // 20%
		{
			printf("%s is didn't to anything \n", Monster_Name);
		}
		Sleep(1000);
	}
	Player_turn = 1;

	dBattle();
}