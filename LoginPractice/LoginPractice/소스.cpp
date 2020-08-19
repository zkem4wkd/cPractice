#include <stdio.h>
#include <iostream>
#include <windows.h>

int main(void)
{
	int select = 0;
	int Hp = 100;
	int Atk = 20;
	int Def = 10;

	printf("1. 파이리 2. 꼬부기 3. 이상해씨\n");
	scanf("%d", &select);
	if (select == 1) 
	{
		printf("파이리 선택\n");
		Sleep(2000);
		system("cls");

		printf("=====================================\n");
		printf("이름 : 파이리\n");
		printf("속성 : 불꽃\n");
		printf("HP : %d\n",Hp);
		printf("공격력 : %d\n",Atk);
		printf("방어력 : %d \n",Def);
		printf("=====================================\n");
	}
	if (select == 2)
	{
		printf("꼬부기 선택\n");
		Sleep(2000);
		system("cls");

		printf("=====================================\n");
		printf("이름 : 꼬부기\n");
		printf("속성 : 물\n");
		printf("HP : %d\n", Hp);
		printf("공격력 : %d\n", Atk);
		printf("방어력 : %d \n", Def);
		printf("=====================================\n");
	}
	if (select == 3)
	{
		printf("이상해씨 선택\n");
		Sleep(2000);
		system("cls");

		printf("=====================================\n");
		printf("이름 : 이상해씨\n");
		printf("속성 : 풀\n");
		printf("HP : %d\n", Hp);
		printf("공격력 : %d\n", Atk);
		printf("방어력 : %d \n", Def);
		printf("=====================================\n");
	}
	else
		printf("올바른 값 입력");
	


}