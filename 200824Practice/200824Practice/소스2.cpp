#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

int main()
{
	int lotto[45];
	srand((unsigned int)time(0));

	int random;

	for (int i = 0; i <= 44; i++)
	{
		lotto[i] = rand() % 45 + 1;
		for (int j = 0; j < i; j++)
		{
			if (lotto[i] == lotto[j])
			{
				i--;
				break;
			}
		}
		
	}
	for (int i = 0; i < 7; i++)
	{
		printf("%d\n", lotto[i]);
	}


	return 0;
}