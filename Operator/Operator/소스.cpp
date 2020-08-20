#include <stdio.h>
#include<iostream>

using namespace std;

int main2(void)
{
	int i = 100;
	int k = 200;
	int sum = 0, minus =0;
	int div = 0, mul = 0;

	printf("i+k=%d\n", i + k);

	sum = i + k;
	printf("sum = %d\n", sum);
	minus = k - i;
	printf("minus = %d\n", minus);
	div = k / i;
	printf("div = %d\n", div);
	mul = i * k;
	printf("mul = %d\n", mul);

	int l = 10;
	int t = 3;

	int rem = l % t; //remainder
	printf("remainder = %d\n", rem);

	int a = 10;
	a++;
	printf("a++ : %d\n", a);
	++a;
	printf("++a : %d\n", a);

	int b = 10;
	b--;
	printf("b-- : %d\n", b);
	--b;
	printf("--b : %d\n", b);

	return 0;
}