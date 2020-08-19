#include <iostream>
#include <stdio.h>

int main123()
{
	int number = 0;
	int number2 = 0;

	printf("Ã¹¹øÂ° ¼ıÀÚ¸¦ ÀÔ·Â : ");
	scanf("%d",&number);
	printf("µÎ¹øÂ° ¼ıÀÚ¸¦ ÀÔ·Â : ");
	scanf("%d",&number2);
	int plus = number + number2;
	printf(" µ¡¼À : %d + %d = %d\n", number, number2,plus);
	int minus = number - number2;
	printf(" »¬¼À : %d - %d = %d\n", number, number2, minus);
	int div = number / number2;
	printf(" ³ª´°¼À : %d / %d = %d\n", number, number2, div);
	int mul = number * number2;
	printf(" °ö¼À : %d * %d = %d\n", number, number2, mul);
	printf(" µ¡¼À : %d + %d = %d\n", number, number2, number+number2);
	
	return 0;
}