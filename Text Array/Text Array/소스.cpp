#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	/*char arr[10];

	printf("Students name : ");
	scanf("%s", arr);

	printf("name : %s\n", arr);*/


	/*int array2D[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", array2D[i][j]);
		}
		printf("\n");
	}*/

	/*int array[5];

	for (int i = 0; i < 5; i++)
	{
		printf("Input array : ");
		scanf("%d", &array[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("Array : %d\n", array[i]);
	}*/

	int item = 0;
	int inven[10];


	for (int i = 0; i < 5; i++)
	{
		printf("Select your item : ");
		scanf("%d", &inven[i]);
		Sleep(600);
		if (inven[i] == 1)
		{
			printf("You got short sword\n");

		}
		if (inven[i] == 2)
		{
			printf("You got chain armor\n");

		}
		if (inven[i] == 3)
		{
			printf("You got bow\n");

		}
		if (inven[i] == 4)
		{
			printf("You got shield\n");

		}
		
	}

	printf("Your Inventory :\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d : ", i);
		if (inven[i] == 1)
		{
			printf("short sword\n");

		}
		if (inven[i] == 2)
		{
			printf("chain armor\n");

		}
		if (inven[i] == 3)
		{
			printf("bow\n");

		}
		if (inven[i] == 4)
		{
			printf("shield\n");

		}
		if (inven[i] == 0)
		{
			printf("Not Item");
		}
		


	}

	




	return 0;
}