#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
	int x = 0, y = 0;
	char i = 0;


	while (1)
	{
		printf("X:%d , Y:%d\n", x, y);
		printf("Input (2,4,6,8): ");
		scanf(" %c", &i);
		if (i == 'w')
		{
			y += 1;

		}
		else if (i == 's')
		{
			y -= 1;

		}
		else if (i == 'a')
		{
			x -= 1;

		}
		else if (i == 'd')
		{
			x += 1;

		}
		else
		{
			printf("Error Command\n");
		}
	}
}