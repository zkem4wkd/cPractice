#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

int main123()
{
	int array[10];
	int number1 = 0 , number2 = 0;

	printf("Input 10 numbers \n");
	for (int a = 0; a < 10; a++)
	{
		printf("Enter : ");
		scanf(" %d", &array[a]);
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (array[j] > number1)
			{
				number1 = array[i]; 
			}
		}
	}
	printf("Max number : %d", number1);


	return 0;
}