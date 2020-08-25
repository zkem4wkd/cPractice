#include <iostream>

int main()
{
	int board[25] = { 0 };
	int count = 24;

	for (int i = 0; i < 25; i++)
	{
		board[i] = i + 1;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf(" %2d", board[count--]);
		}
		printf("\n");
	}
}