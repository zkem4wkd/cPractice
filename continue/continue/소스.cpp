#include <iostream>

using namespace std;

int main()
{
	/*for (int i = 0; i < 20; i++)
	{
		if (i % 2 == 0)continue;
		printf("%d\n", i);
		if (i == 15)
		{
			break;
		}
	}*/

	/*int i , sum=0;
	for (i = 0; i <= 10; i++)
	{
		if (i % 2 == 0)continue;
		{
			sum += i;
		}
	}
	printf("Sum of odd numbers of 10 : %d\n", sum);*/

	/*string wp;
	for (int i = 0; ;)
	{
		printf("1.Sword 2.Bow 3.MagicStick 4.Exit\n");
		printf("Select Your Weapons : ");
		scanf(" %d\n", &i);
		if (i == 1)
		{
			printf("You equip sword!\n");
			wp = "Sword";
		}
		if (i == 2)
		{
			printf("You equip bow!\n");
			wp = "Bow";
		}
		if (i == 3)
		{
			printf("You equip magicstick!\n");
			wp = "MagicStick";
		}
		if (i == 4)
		{
			break;
			printf("You exit shop\n");
		}
		else
		{
			printf("Error");
		}
	}
	cout << "Your Weapon is " + wp << endl;*/

	int i=0, j=0;
	for (i = 3; i < 30; j++)
	{
		i += 3;
		printf("%d\n", i);
	}



	return 0;
}