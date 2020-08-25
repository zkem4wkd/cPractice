#include <iostream>
#include <ctime>

using namespace std;


int main()
{
	//strcmp Function
	/*char name[10] = "±èÃ¶¼ö";

	//true = 0 , false = 1 or -1
	if (!strcmp(name, "±èÃ¶¼ö"))
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}

	//strcat , strcpy
	char name2[20] = "Â¯±¸´Â";
	char name3[10] = "¸ø¸»·Á";

	strcat_s(name2, name3);
	printf("%s", name2);
	strcpy_s(name2, "¾Æ´Ï¿À");
	printf("%s", name2);*/

	//swap

	/*int a = 10;
	int b = 15;

	swap(a, b);
	printf("a = %d ,b = %d", a, b);*/

	/*int suffle[20];
	srand((unsigned int)time(0));



	for (int i = 0; i < 100; i++)
	{
		int a = rand() % 10 + 1;
		int b = rand() % 10 + 1;
		int c = 0;

		c = suffle[a];
		suffle[a] = suffle[b];
		suffle[b] = c;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", suffle[i]);
	}*/

	/*int number[25];

	for (int i = 0; i < 25; i++)
	{
		number[i] = i + 1;
		//printf("\t");
		if (i % 5 == 0)
		{
			printf("\n");
		}
		printf("%2d ", number[i]);
	}*/

	int board[25] = { 0 };
	int count = 0;

	for (int i = 0; i < 25; i++)
	{
		board[i] = i + 1;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf(" %2d", board[count++]);
		}
		printf("\n");
	}


	return 0;
}