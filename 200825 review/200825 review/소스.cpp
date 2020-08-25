#include <iostream>

int main()
{
	
	/*int a = 0;
	int num = 10;

	while (a < num)
	{
		printf("while : %d\n",a+1);
		a++;
	}
	printf("while end : %d", a);
	
	
	return 0;*/

	/*int a = 0;
	int num = 0;
	for (int i = 0; i <= 100; i++)
	{
		num += i;
		if (i == 10)
		{
			break;
		}
		
	}
	printf("%d\n", num);*/

	int a = 0;
	printf("Input number : \n");
	scanf_s("%d", &a);
	
	int mul = 0;
	for (int i=1; i <= a; i++)
	{
		mul = a*i;
		printf("%d x %d = %d\n", a, i,mul);
	}
	main();
}