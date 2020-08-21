#include <iostream>

using namespace std;

int main()
{
	/*int sum=0 ,j=0;
	for (int i = 1; i <= 10; i++)
	{
		sum += i;
		printf("i+%d = %d\n", i, sum);

	}
	printf("sum = %d", sum);*/

	for (int i = 0; i <= 20; i++)
	{
		if (i % 2 == 1)
		{
			printf("odd : %d\n", i);
		}
		if (i % 2 == 0)
		{
			printf("even : %d\n", i);
		}
	}

	return 0;
}