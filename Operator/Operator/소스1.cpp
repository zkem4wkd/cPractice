#include <stdio.h>
#include <iostream>

void main(){
int z = 0, x = 0;
int sum, minus, div, mul, rem;

printf("first number : ");
scanf("%d", &z);
printf("\nsecond number : ");
scanf("%d", &x);

sum = z + x;
minus = z - x;
div = (float)x / z;
mul = z * x;
rem = x % z;
printf("sum = %d\n", sum);
printf("minus = %d\n", minus);
printf("div = %d\n", div);
printf("mul = %d\n", mul);
printf("rem = %d\n", rem);

}