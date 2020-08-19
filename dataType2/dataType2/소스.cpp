#include <stdio.h>
#include <iostream>
using namespace std;

int main(void)
{
	// char string type printf

	char Alpha = 'a';

	printf(" A : %c\n", Alpha);

	// scanf output
	char a;
	string name = "";

	printf("Enter Alphabet : ");
	scanf("%c",&a);
	printf("Select : %c\n", a);
	printf("Enter your name : ");
	scanf("%s", name); // 문자열은 &를 제외하고 사용.
	printf("Your name is %s \n", name);

	int Atk, Def, Mp;

	printf("Enter your Attack Point :");
	scanf("%d", &Atk);
	printf("Attack Point : %d\n", Atk);

	printf("Enter your Defense Point :");
	scanf("%d", &Def);
	printf("Defense Point : %d\n", Def);

	printf("Enter your Magic Point :");
	scanf("%d", &Mp);
	printf("Magic Point : %d\n", Mp);
	
}