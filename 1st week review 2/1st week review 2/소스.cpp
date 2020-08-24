#include <iostream>
#include <ctime>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
	/*int a = 0;

	printf("increase the value of a by 1\n");

	for (int b = 0; b < 5; ++b)
	{
		++a;
		printf("%d\n", a);
	}
	printf("decrease the value of a by 1\n");

	for (int b = 0; b < 5; b++)
	{
		printf("%d\n", a);
		a--;
	}*/

	/*for (int a = 0; a < 5; a++)
	{
		printf("side\n");
		for (int b = 0; b < 5; b++)
		{
			printf("in\n");
			break;
			printf("break\n");
		}
	}*/

	/*for (int a = 0; a < 5; a++)
	{
		printf("outside\n");
		for (int b = 0; b < 5; b++)
		{
			printf("inside\n"); continue;
			printf("continue");
		}
	}*/

	
	int num = 0;

	srand((unsigned int)time(0));

	for (int i = 0; i < 10; i++)
	{
		num = rand() % 10+1;
		printf("%d\n", num);
	}

	return 0;
}