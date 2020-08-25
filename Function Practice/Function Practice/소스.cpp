#include <iostream>
#include <ctime>
#include <windows.h>



int AddNumber()
{
	int num=0;
	for (int i = 0; i <= 100; i++)
	{
		num = num + i;
	}
	printf("%d\n", num);

	return num;
}

int AddNumber2(int a)
{
	int num = 0;
	for (int i = 0; i <= a; i++)
	{
		num = num + i;
	}
	printf("%d\n", num);

	return num;
}

//Overloading
void add()
{
	printf("add function");
}
void add(int a)
{
	printf("Add Function");
}
void add(int a,int b)
{
	printf("Plus function");
}
int CreateMonster(int a)
{
	switch (a)
	{
	case 1:
		printf("Goblin\n");
		break;
	case 2:
		printf("Slime\n");
		break;
	case 3:
		printf("BigBee\n");
		break;
	}
	return a;
}


int main()
{
	/*int b;
	printf("Number : ");
	scanf_s("%d", &b);
	AddNumber2(b);*/
	srand((unsigned int)time(0));
	for (int i = 0; i < 5 ; i++)
	{
		Sleep(500);
		int random = rand() % 3 + 1;
		CreateMonster(random);
	}
	


	return 0;
}