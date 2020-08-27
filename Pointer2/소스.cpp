#include<iostream>

void Po(int *a)
{
	/**a = 10;
	printf("Values : %d\n", a);*/

}

void ArrayFunction(int *array[])
{
	for (int i = 0; i < 10; i++)
	{
		printf("Array's values : %d\n", array[i]);
	}
}

int main()
{
	/*int a = 1;

	printf("a : %d\n",a);
	Po(&a);
	printf("a : %d\n", a);*/

	int array[10];
	int* pArray = array;
	

	for (int i = 0; i < 10; i ++ )
	{
		array[i] = i + 1;
	}
	ArrayFunction(pArray);


	return 0;
}