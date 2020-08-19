#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
	string userId = "";
	int userPassWd = 0;

	printf("Unity RPG2020\n");

	printf("=======================================\n");
	
	printf("Enter your ID : ");
	scanf("%s",userId);
	printf("ID : %s\n",userId);

	printf("Enter your PassWord(Only Number) : ");
	scanf("%d",&userPassWd);
	printf("PassWord : %d\n",userPassWd);

	printf("=======================================\n");

	printf("login Success !\n");
	//printf("ID : %s\n", userId);
	//printf("PassWord : %s\n", userPassWd);

}