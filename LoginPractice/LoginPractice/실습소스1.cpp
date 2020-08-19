#include <iostream>
#include <stdio.h>

void main13()
{
	int number = 0;
	int number2 = 0;
	int number3 = 0;
	int number4 = 0;
	int number5 = 0;
	printf("숫자를 입력하세요. ");
	scanf("%d", &number);
	scanf(" %d", &number2);
	scanf(" %d", &number3);
	scanf(" %d", &number4);
	scanf(" %d", &number5);
	printf("%d",number);
	printf(" %d",number2);
	printf(" %d",number3);
	printf(" %d",number4);
	printf(" %d",number5);


	std::string number = "";
	scanf("%s", number);
	printf("%s", number);
}