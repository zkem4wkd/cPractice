#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

int main12()
{
	string lunch[10];
	lunch[0] = "Chicken soup";
	lunch[1] = "Hamburger";
	lunch[2] = "Noodle";
	lunch[3] = "Pizza Bread";
	lunch[4] = "Hotdog";
	lunch[5] = "Sandwich";
	lunch[6] = "Pasta";
	lunch[7] = "Fish and Chips";
	lunch[8] = "Pancake";
	lunch[9] = "Gimbap";


	int a ,count=0;
	srand((unsigned int)time(0));
	int random;

	printf("Input number '1' : ");
	scanf(" %d", &a);

	if (a == 1)
	{
		
		printf("Your lunch menu : \n");

		for (int i = 0; i < 5; i++)
		{
			random = rand() % 10 + 1;
			cout << lunch[random] << endl;
		}

	}

	return 0;
}