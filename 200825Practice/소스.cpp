#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

int random1(int i)
{
	/*int j = 0;
	static int lotto[45];
	for (int a = 0 ; a < i ; a++)
	{
		srand((unsigned int)time(0));
		
		while (j<i) 
		{
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
				printf("%2d ", lotto[i]);
				Sleep(100);
			}
			printf("\n");
			j++;
		}
		
	}*/

	return 0;
}

int Compare(int lotto[], int mlotto[])
{
	int count = 0;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (lotto[i] == mlotto[j])
			{
				count++;
			}
		}
	}
	printf("Same numbers : %d", count);

	return count;
}



int main12()
{
	int num = 0;
	int mLotto[7];
	int count;
	printf("How many would you like to buy?\n");
	printf("Input : ");
	scanf("%d",&num);
	printf("Input your 7 numbers \n");
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			cout << "number : ";
			cin >> mLotto[j];
		}
		printf("%d choice : ", i + 1);
		for (int j = 0; j < 7; j++)
		{
			cout << mLotto[j] << " ";
		}
		printf("\n");
	}
	int j = 0;
	static int lotto[45];
	for (int a = 0; a < num; a++)
	{
		srand((unsigned int)time(0));

		while (j < num)
		{
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
				printf("%2d ", lotto[i]);
				Sleep(100);
			}
			printf("\n");
			j++;
		}

	}
	Compare(lotto, mLotto);

	return 0;
}