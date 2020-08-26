#include <iostream>

int apple = 0;

void add()
{
	apple = 10;
	printf("apple %d\n", apple);
}

int main()
{

	printf("%d\n", apple);
	add();
	printf("apple %d\n", apple + 10);

	return 0;
}