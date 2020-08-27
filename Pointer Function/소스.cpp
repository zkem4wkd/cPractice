#include <iostream>

void Function(int* a)
{
	*a = *a + 2;

	printf("%d\n", *a);
}



int main()
{
	int array[5];

	for (int i = 0; i < 5; i++)
	{
		array[i] = i + 1;
	}

	Function(&array[2]);

	return 0;
}