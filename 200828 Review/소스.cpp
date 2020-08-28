#include <iostream>

void local()
{
	int b = 15;

	printf("In local function's local variable b is %d \n", b);
}

int b;
int main()
{
	/*int i = 5;

	int b = 10;

	printf("main Function local variable b is %d \n", b);

	if (i < 10)
	{
		local();

		int b = 30;

		printf("In if local variable b is %d \n", b);
	}

	printf("Now variable b is %d \n ", b);*/

	int* numPtr;
	int num1 = 1;
	numPtr = &num1;
	printf("%d\n", *numPtr);

	return 0;

	

}