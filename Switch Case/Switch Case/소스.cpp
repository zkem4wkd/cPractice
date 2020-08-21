#include <iostream>

using namespace std;

int main()
{
	/*char a;

	printf("Select Alphbet in 'a' or 'b' or 'c' : ");
	scanf("%c", &a);

	switch (a)
	{
	case 'a':
		printf("Alphabet is a");
		break;
	case 'b':
		printf("Alphabet is b");
		break;
	case 'c':
		printf("Alphabet is c");
		break;
	default:
		printf("nothing");
		
		
	}*/

	int i;
	printf(" Enter your number : ");
	scanf("%d", &i);

	switch (i%2)
	{
	case 0:
		printf("number is even");
		break;
	case 1:
		printf("number is odd");
		break;
	}



	return 0;
}