#include <iostream>
#include <windows.h>

int main()
{
	int num =0 ;
	char t1, t2, t3, t4, t5;
	char j = 'J';

	printf("Enter Five Text \n");
	/*scanf("%s %s %s %s %s", t1, t2, t3, t4, t5);*/
	scanf("%c %c %c %c %c", &t1, &t2, &t3, &t4, &t5);
	
	if (t1 == j)
	{
		num += 1;
	}
	if (t2 == j)
	{
		num += 1;
	}
	if (t3 == j)
	{
		num += 1;
	}
	if (t4 == j)
	{
		num += 1;
	}
	if (t5 == j)
	{
		num += 1;
	}
	printf("J is %d", num);

	/*if (t1 == j && t2 == j && t3 == j && t4 == j && t5 == j)
	{
		printf(" 'J'is five ");
	}*/
	return 0;
}