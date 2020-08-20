#include <iostream>
#include <windows.h>

using namespace std;

int main1512()
{
	int num1, num2;

	printf("Enter First Number : ");
	scanf("%d", &num1);
	printf("Enter Second Number : ");
	scanf("%d", &num2);

	if (num1 > num2)
	{
		printf("num1 - num2 = %d",num1-num2);

	}
	else 
	{
		printf("num2 - num1 = %d", num2 - num1);
	}

	return 0;
}