#include <iostream>
#include <malloc.h>

using namespace std;

int main()
{
	int* pi;

	pi = (int*)malloc(sizeof(int)); // input memory 
	*pi = 5;

	printf("%d \n", *pi);

	free(pi);

	printf("%d \n", *pi);
	return 0;
}