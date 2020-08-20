#include <iostream>
#include <windows.h>

using namespace std;

int main1251()
{
	int i =0;

	printf("Enter Your Test Points : ");
	scanf("%d",&i);

	if (i < 60)
	{
		printf("Your Grades is F");
	}
	else if (i <= 70)
	{
		printf("Your Grades is D");
	}
	else if (i <= 80)
	{
		printf("Your Grades is C");
	}
	else if (i <= 90)
	{
		printf("Your Grades is B");
	}
	else if (i <= 100)
	{
		printf("Your Grades is A");
	}


	return 0;
}