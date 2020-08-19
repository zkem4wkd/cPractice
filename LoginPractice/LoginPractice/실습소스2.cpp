#include <iostream>
#include <stdio.h>
#include <Windows.h>

using namespace std;
int main()
{
	string id = "";
	int passWd = 0;

	printf("게임 시작\n");
	Sleep(1000);
	printf("=======");
	Sleep(1000);
	printf("================");
	Sleep(1000);
	printf("========================");
	Sleep(500);
	printf("\n로딩완료");
	Sleep(500);
	system("cls");
	printf("Id : ");
	scanf("%s", id);
	printf("\nPassWord : ");
	scanf("%d", &passWd);
	Sleep(700);
	printf("로그인 완료\n");
	Sleep(500);
	system("cls");
	printf("========================");
	printf("\nID : %s\n",id);
	printf("PassWord : %d\n", passWd);
	printf("========================");
	
	return 0;
}