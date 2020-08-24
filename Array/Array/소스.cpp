#include <iostream>

using namespace std;

int main()
{

	/*int array[3] = {};

	array[0] = 100;
	array[1] = 200;
	array[2] = 300;

	printf("First Array's Value : %d\n", array[0]);
	printf("Second Array's Value : %d\n", array[1]);
	printf("Third Array's Value : %d\n", array[2]);*/


	/*int i;
	int array[10];

	for (i = 0; i < 10; i++)
	{
		array[i] = i + 1;
		printf("Array : %d\n", array[i]);
	}*/

	//int ar1[5]; // Trash value
	//int ar2[5] { 0 }; // All Values initialize 0
	//int ar3[5] = { 0 };
	//int ar4[5] = { 1,2,3 }; //{1,2,3,0,0}
	//int ar5[5] = { 4,5,6,7,8 };

	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d\n", ar5[i]);
	//}

	/*int i;
	int array[2][3];


	array[0][0] = 1;
	array[0][1] = 2;
	array[0][2] = 3;
	array[1][0] = 4;
	array[1][1] = 5;
	array[1][2] = 6;

	for (i = 0; i <= 1 ; i++)
	{
		for (int j = 0; j <= 2 ; j++)
		{
			printf("%d\t", array[i][j]);
		}
		printf("\n");
	}*/



	int i, j, k, count = 0;
	int array[2][3][4];

	for (i = 0 ; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 4; k++)
			{
				array[i][j][k] = ++count;
				printf("%d\t", array[i][j][k]);
			}
			printf("\n");
		}
		
	}
	


	return 0;
}