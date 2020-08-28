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
int dropItem = 0;


char Bat_Item1[40] = "Bat's Wing";
char Bat_Item2[40] = "Bat's tusk";
char Worm_Item1[40] = "Worm's skin";
char Worm_Item2[40] = "Acid Liquid";
char Kobolt_Item1[40] = "Old leather";
char Kobolt_Item2[40] = "Kobolt's knife";
char Flog_Item1[40] = "Flog's tongue";
char Flog_Item2[40] = "Slippery mucus";
char JellyBee_Item1[40] = "Yellow Jelly";
char JellyBee_Item2[40] = "JellyBee's stone";


char pInven1[50] = {'\0'};
int item_amount1 = 0;
char pInven2[50] = { '\0' };
int item_amount2 = 0;
char pInven3[50] = { '\0' };
int item_amount3 = 0;
char pInven4[50] = { '\0' };
int item_amount4 = 0;
char pInven5[50] = { '\0' };
int item_amount5 = 0;

int dInside=0;
int dLv=0;
void dStart();
void Encount_Monster();
void dBattle();
void Death();
void Heal();
void DropItem();
void Get_Item();

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

	if (dInside==0)
	{
		printf("Enter the dungeon\n1.Enter 2.Exit 3.Heal \n");
	}
	else if (dInside!=0)
	{
		printf("Enter the Deep Space\n1.Enter 2.Exit 3.Heal");
	}
	scanf_s("%d", &D_Plag);

	switch (D_Plag)
	{
	case 1:
		Encount_Monster();
		break;
	case 2:
		printf("Game End\n");
		Sleep(500);
		exit(0);
		break;
	case 3:
		Heal();
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
	printf("You arrived Dungeon total : %d \n",dLv);
	dInside = 1;
	dLv++;

	Sleep(1000);

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
		Death();
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

void Death()
{
	if (P_Hp <= 0)
	{
		Sleep(500);
		system("cls");
		printf("You dead .\n");
		dLv = 0;
		Sleep(500);
		exit(0);
	}
	if (M_Hp <= 0)
	{
		Sleep(500);
		system("cls");
		printf("You Slayed %s\n",Monster_Name);
		Sleep(700);
		DropItem();
		printf("Battle end");
		Sleep(1000);
		dStart();
	}
	
}

void Heal()
{
	system("cls");
	printf("You healed by Church.\n");
	dInside = 0;
	dLv = 0;
	Sleep(500);

	if (Job_Plag == 1)
	{
		P_Hp = 100;
	}
	else if (Job_Plag == 2)
	{
		P_Hp = 80;
	}
	else if (Job_Plag == 3)
	{
		P_Hp = 60;
	}
	dStart();
}

void DropItem()
{
	if (EncountRand == 1)
	{
		for (int i = 0; i < 3; i++)
		{
			dropItem = rand() % 3;
			if (dropItem == 0)
			{
				printf("You gain nothing.\n");
			}
			else if (dropItem == 1)
			{
				printf("You get %s\n", Bat_Item1);
				Get_Item(Bat_Item1);
			}
			else if (dropItem == 2)
			{
				printf("You get %s\n", Bat_Item2);
				Get_Item(Bat_Item2);
			}
		}
	}
	if (EncountRand == 2)
	{
		for (int i = 0; i < 3; i++)
		{
			dropItem = rand() % 3;
			if (dropItem == 0)
			{
				printf("You gain nothing.\n");
			}
			else if (dropItem == 1)
			{
				printf("You get %s\n", Worm_Item1);
				Get_Item(Worm_Item1);
			}
			else if (dropItem == 2)
			{
				printf("You get %s\n", Worm_Item2);
				Get_Item(Worm_Item2);
			}
		}
	}
	if (EncountRand == 3)
	{
		for (int i = 0; i < 3; i++)
		{
			dropItem = rand() % 3;
			if (dropItem == 0)
			{
				printf("You gain nothing.\n");
			}
			else if (dropItem == 1)
			{
				printf("You get %s\n", Kobolt_Item1);
				Get_Item(Kobolt_Item1);
			}
			else if (dropItem == 2)
			{
				printf("You get %s\n", Kobolt_Item2);
				Get_Item(Kobolt_Item2);
			}
		}
	}
	if (EncountRand == 4)
	{
		for (int i = 0; i < 3; i++)
		{
			dropItem = rand() % 3;
			if (dropItem == 0)
			{
				printf("You gain nothing.\n");
			}
			else if (dropItem == 1)
			{
				printf("You get %s\n", Flog_Item1);
				Get_Item(Flog_Item1);
			}
			else if (dropItem == 2)
			{
				printf("You get %s\n", Flog_Item2);
				Get_Item(Flog_Item2);
			}
		}
	}
	if (EncountRand == 5)
	{
		for (int i = 0; i < 3; i++)
		{
			dropItem = rand() % 3;
			if (dropItem == 0)
			{
				printf("You gain nothing.\n");
			}
			else if (dropItem == 1)
			{
				printf("You get %s\n", JellyBee_Item1);
				Get_Item(JellyBee_Item1);
			}
			else if (dropItem == 2)
			{
				printf("You get %s\n", JellyBee_Item2);
				Get_Item(JellyBee_Item2);
			}
		}
	}
}

void Get_Item(char getItem[50])
{
	if (!strcmp(pInven1, getItem))
	{
		item_amount1++;
		printf("%s is duplicated, Total : %d \n",pInven1,item_amount1);
		return;
	}
	if (!strcmp(pInven2, getItem))
	{
		item_amount2++;
		printf("%s is duplicated, Total : %d \n", pInven2, item_amount2);
		return;
	}
	if (!strcmp(pInven3, getItem))
	{
		item_amount3++;
		printf("%s is duplicated, Total : %d \n", pInven3, item_amount3);
		return;
	}
	if (!strcmp(pInven4, getItem))
	{
		item_amount4++;
		printf("%s is duplicated, Total : %d \n", pInven4, item_amount4);
		return;
	}
	if (!strcmp(pInven5, getItem))
	{
		item_amount5++;
		printf("%s is duplicated, Total : %d \n", pInven5, item_amount5);
		return;
	}

	if (!strcmp(pInven1, "")) //empty pInven
	{
		strcpy_s(pInven1,strlen(getItem)+1, getItem);

		item_amount1++;
	}
	else if(!strcmp(pInven2, "")) 
	{
		strcpy_s(pInven2, strlen(getItem) + 1, getItem);

		item_amount2++;
	}
	else if (!strcmp(pInven3, ""))
	{
		strcpy_s(pInven3, strlen(getItem) + 1, getItem);

		item_amount3++;
	}
	else if (!strcmp(pInven4, ""))
	{
		strcpy_s(pInven4, strlen(getItem) + 1, getItem);

		item_amount4++;
	}
	else if (!strcmp(pInven5, ""))
	{
		strcpy_s(pInven5, strlen(getItem) + 1, getItem);

		item_amount5++;
	}
	else
	{
		printf("Inventory is full. You can't has items.\n");
	}
	printf("Inventory\n[1]%s\n[2]%s\n[3]%s\n[4]%s\n[5]%s\n", pInven1, pInven2, pInven3, pInven4, pInven5);
}
