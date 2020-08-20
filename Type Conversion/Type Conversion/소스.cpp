#include <stdio.h>
#include <iostream>
using namespace std;

int main(void)
{
	int i, j;
	float f;

	i = 70;
	j = 50;
	f = (float)i / j;
	int k = i % j;

	printf("i/j = %.2f\n", f);
	printf("i/j = %d\n", k);
}