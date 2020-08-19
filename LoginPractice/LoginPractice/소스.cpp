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
	else if (select > 3 || select == 0) {
		printf("올바른 값 입력");
	}

	int input = 0;
	int exp = 10;
	printf("적을 만났다.\n");
	printf("1. 싸운다 2. 도망간다\n");
	scanf("%d", &input);
	Sleep(1000);
	printf("싸워서 승리했다.\n");
	printf("경험치가 %d 만큼 올랐다.\n", exp);
	Sleep(1000);
	printf(".\n");
	Sleep(1000);
	printf("..\n");
	Sleep(1000);
	printf("...\n");	
	printf("레벨이 상승하였다.\n");
	Sleep(500);
	Hp = Hp + 8;
	Atk = Atk + 2;
	Def = Def + 1;
	printf("능력치가 상승하였다. \nHP : %d / 공격력 : %d / 방어력 : %d\n", Hp, Atk, Def);

}