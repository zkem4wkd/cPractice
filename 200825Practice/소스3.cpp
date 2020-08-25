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
		break;
	case 2:
		printf("Your job is Archer\n");
		Sleep(1000);
		break;
	case 3:
		printf("Your job is Magician\n");
		Sleep(1000);
		break;
	default:
		printf("Error Code");
		break;
	}
	return a;
};
struct Char
{
	string job;
	int gold;
	int power;
};


int main()
{
	/*int asd = 1;
	int asd2 ;
	testFunction(asd);
	asd2 =addFunction(1, 2);
	printf("%d\n", asd2);*/
	Screen("game\n");

	printf("start\n");
start:
	CharSelect();

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