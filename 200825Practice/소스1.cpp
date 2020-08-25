#include <iostream>
#include <ctime>
#include <windows.h>

int RandomMap(int map[25])
{
	srand((unsigned int)time(0));
	map[25] = { 0 };

	for (int i = 0; i < 25; i++)
	{
		map[i] = rand()%3;
	}
	
	return map[25];
}

int PrintMap(int map[25])
{
	map[25] = { 0 };
	for (int i = 0; i < 25; i++)
	{
		map[i];
		if (i % 5 == 0)
		{
			printf("\n");
		}
		if (map[i] == 0)
		{
			printf("¡Ü");
		}
		if (map[i] == 1)
		{
			printf("¡à");
		}
		if (map[i] == 2)
		{
			printf("¢À");
		}

	}

	return map[25];
}

using namespace std;
int main123()
{
	srand((unsigned int)time(0));
	int map[25];

	RandomMap(map);
	PrintMap(map);

	return 0;
}