#include <stdio.h>

int main(void)
{
	/*int a = 10;
	printf("a : %d\n", a++);
	printf("a : %d\n", a);

	int i = 0;

	int num1 = 10;
	int num2 = 10;
	int num3 = 10;
	int num4 = 10;
	int num5 = 10;

	printf("Enter number : ");
	scanf("%d", &i);

	printf("\nResult += : %d\n", num1 += i);
	printf("\nResult -= : %d\n", num2 -= i);
	printf("\nResult *= : %d\n", num3 *= i);
	printf("\nResult /= : %d\n", num4 /= i);
	printf("\nResult %%= : %d\n", num4 %= i);*/

	//관계연산자

	/*int numb1;
	int numb2;

	int str1, str2, str3, str4, str5, str6;
	printf("Enter two numbers : ");
	scanf("%d %d", &numb1,&numb2);

	str1 = (numb1 == numb2);
	str2 = (numb1 != numb2);
	str3 = (numb1 < numb2);
	str4 = (numb1 > numb2);
	str5 = (numb1 <= numb2);
	str6 = (numb1 >= numb2);
	printf("== operator : %d\n", str1);
	printf("!= operator : %d\n", str2);
	printf("< operator : %d\n", str3);
	printf("> operator : %d\n", str4);
	printf("<= operator : %d\n", str5);
	printf(">= operator : %d\n", str6);*/

	//논리연산자

	int number1 = 10;
	int number2 = 5;

	int and1, and2;
	int or1, not1;

	and1 = (number1 == 10 && number2 == 5); //true && true == true
	printf("and1:%d\n", and1);

	and2 = (number1 == 10 && number2 == 10); //true && false == false
	printf("and2:%d\n", and2);

	or1 = (number1 == 10 || number2 == 10); //true && false == true
	printf("or:%d\n", or1);

	not1 = (!number1); // 0 : false , 1 : true
	printf("not:%d\n", not1);

}