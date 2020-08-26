#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

int testFunction(int func)
{
	printf("%d\n", func);

	return func;
}
int addFunction(int add, int add2)
{
	int result = add + add2;
	return result;
}

void Screen(string gamename);

int CharSelect()
{
	int a;
	printf("Select Your job\n");
	printf("1.Warrior\t2.Archer\t3.Magician\n");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		printf("Your job is Warrior\n");
		Sleep(1000);
		system("cls");
		break;
	case 2:
		printf("Your job is Archer\n");
		Sleep(1000);
		system("cls");
		break;
	case 3:
		printf("Your job is Magician\n");
		Sleep(1000);
		system("cls");
		break;
	default:
		printf("Error Code");
		break;
	}
	return a;
};

void Field()
{
	printf("You arrived Field\n");
}

void Shop()
{
	printf("You arrived Shop\n");
}

struct Char
{
	string job;
	int gold;
	int power;
};


int main1231()
{
	int num = 0;
	/*int asd = 1;
	int asd2 ;
	testFunction(asd);
	asd2 =addFunction(1, 2);
	printf("%d\n", asd2);*/
start:
	Screen("game\n");

	printf("start\n");
	CharSelect();
select:
	printf("What do you want?\n");
	printf("1.Go Field 2.Go shop 3.Return Menu\n");
	scanf("%d", &num);
	switch (num)
	{
	case 1: 
		Field();
		goto select;
		break;
	case 2: 
		Shop();
		goto select;
		break;
	case 3:
		goto start;
		break;
	default:
		printf("Command Error");
		goto select;
		break;
	}

	return 0;
}

void Screen(string gamename)
{
	int a = 0;
	cout << gamename << endl;

	printf("Select Menu\n");
	cout << "1. Game Start" << endl;
	cout << "2. Exit Game" << endl;
	scanf("%d", &a);
	if (a == 1)
	{
		system("cls");
	}
	else if (a == 2)
	{
		printf("Good bye");
		exit(0);
	}
	else
	{
		printf("Command Error");
		exit(0);
	}

};