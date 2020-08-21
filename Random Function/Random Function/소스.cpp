#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;
int main()
{
	/*srand(time(NULL));

	int random;

	

	for (int i = 1; i <= 10; i++) 
	{
		random = rand() % 10;
		printf("%d\n", random);
	}*/

	/*srand(time(NULL));
	int random;
	int gold = 30;
	int inven = 0;
	while (true)
	{
		printf("\nYour gold : %d\n", gold);
		printf("\nRandom Gotcha : \n");
		gold -= 10;
		printf(".\n");
		Sleep(1000);
		printf("..\n");
		Sleep(1000);
		printf("...\n");
		Sleep(1000);
		random = rand() % 10;

		if (random == 1)
		{
			printf("You got Dusk(1)");
			inven = inven | random;
		}
		if (random == 2)
		{
			printf("You got Fist(2)");
			inven = inven | random;
		}
		if (random == 3)
		{
			printf("You got Gun(3)");
			inven = inven | random;
		}
		if (random == 4)
		{
			printf("You got Knife(4)");
			inven = inven | random;
		}
		if (random == 5)
		{
			printf("You got Long Sword(5)");
			inven = inven | random;
		}
		if (random == 6)
		{
			printf("You got Short Bow(6)");
			inven = inven | random;
		}
		if (random == 7)
		{
			printf("You got Axe(7)");
			inven = inven | random;
		}
		if (random == 8)
		{
			printf("You got Whip(8)");
			inven = inven | random;
		}if (random == 9)
		{
			printf("You got 30 Golds(9)");
			gold += 30;
		}if (random == 0)
		{
			printf("You can't have anything");
		}
		
		if (gold == 0)
		{
			printf("\nYou have not gold\n");
			break;
		}

	}
	printf("%d\n", inven);*/

	
	/*srand(time(NULL));
	int random = rand() %10;
	int a = 0;

	while (true)
	{
		if (random <=3)
		{
			printf("40%%");
			a = 40;
			break;
		}
		else if (random <=6)
		{
			printf("30%%");
			a = 30;
			break;
		}
		else if (random <=8)
		{
			printf("20%%");
			a = 20;
			break;
		}
		else
		{
			printf("10%%");
			a = 10;
			break;
		}
	}

	printf("You got : %d",a);*/


	
	


	return 0;

}