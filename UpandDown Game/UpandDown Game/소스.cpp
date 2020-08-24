#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <windows.h>

using namespace std;

int main12()
{
	srand((unsigned int)time(0));

	int random = rand() % 20 + 1;
	int num = 0;
	int eCount = 0;
	
Start:

	eCount++;
	printf("End Count : %d\n", eCount);
	printf("Input numeber : ");
	scanf(" %d", &num);
	if (eCount == 10)
	{
		goto End;
	}

	if (num == random)
	{
		printf("You Win\n");
		Sleep(1000);
		goto End;
	}
	else if (num > random)
	{
		printf("The number is lower\n");
		Sleep(500);
		goto Start;

	}
	else if (num < random)
	{
		printf("The number is higher\n");
		Sleep(500);
		goto Start;
	}
End:
	printf("Game over");



	return 0;
}