#include <iostream>
#include <stdio.h>

int main123()
{
	int number = 0;
	int number2 = 0;

	printf("ù��° ���ڸ� �Է� : ");
	scanf("%d",&number);
	printf("�ι�° ���ڸ� �Է� : ");
	scanf("%d",&number2);
	int plus = number + number2;
	printf(" ���� : %d + %d = %d\n", number, number2,plus);
	int minus = number - number2;
	printf(" ���� : %d - %d = %d\n", number, number2, minus);
	int div = number / number2;
	printf(" ������ : %d / %d = %d\n", number, number2, div);
	int mul = number * number2;
	printf(" ���� : %d * %d = %d\n", number, number2, mul);
	printf(" ���� : %d + %d = %d\n", number, number2, number+number2);
	
	return 0;
}