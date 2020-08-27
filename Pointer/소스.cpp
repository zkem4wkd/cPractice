#include <iostream>

using namespace std;

int main()
{
	int num1,num2,num3;

	/*num1 = 50;
	num2 = 60;
	num3 = 70;

	printf("%#x \n", &num1);
	printf("%#x \n", &num2);
	printf("%#x \n", &num3);*/

	/*int number;
	int* pNumber;

	number = 50;
	pNumber = &number;

	printf("number : %d\n", number);
	printf("number's address : %#x\n", pNumber);

	*pNumber = 60;

	printf("number : %d\n", number);


	int i = 5;
	int* pi;
	pi = &i;

	printf("i : %d\n", i);
	printf("i's address : %#x\n", pi);
	printf("pi : %d\n", *pi);*/

	/*printf("address %d \n", main);*/

	int array[3] = { 10,20,30 };
	int* pArray;

	pArray = array; // pArray = &array[0]

	printf("First address : %d\n", &array[0]);
	printf("First address : %d\n", array);

	printf("%d \n", pArray[0]);
	printf("%d \n", pArray[1]);
	printf("%d \n", pArray[2]);

	return 0;
}