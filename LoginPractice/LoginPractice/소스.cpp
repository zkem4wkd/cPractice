#include <stdio.h>
#include <iostream>
#include <windows.h>

int main(void)
{
	int select = 0;
	int Hp = 100;
	int Atk = 20;
	int Def = 10;

	printf("1. ���̸� 2. ���α� 3. �̻��ؾ�\n");
	scanf("%d", &select);
	if (select == 1) 
	{
		printf("���̸� ����\n");
		Sleep(2000);
		system("cls");

		printf("=====================================\n");
		printf("�̸� : ���̸�\n");
		printf("�Ӽ� : �Ҳ�\n");
		printf("HP : %d\n",Hp);
		printf("���ݷ� : %d\n",Atk);
		printf("���� : %d \n",Def);
		printf("=====================================\n");
	}
	if (select == 2)
	{
		printf("���α� ����\n");
		Sleep(2000);
		system("cls");

		printf("=====================================\n");
		printf("�̸� : ���α�\n");
		printf("�Ӽ� : ��\n");
		printf("HP : %d\n", Hp);
		printf("���ݷ� : %d\n", Atk);
		printf("���� : %d \n", Def);
		printf("=====================================\n");
	}
	if (select == 3)
	{
		printf("�̻��ؾ� ����\n");
		Sleep(2000);
		system("cls");

		printf("=====================================\n");
		printf("�̸� : �̻��ؾ�\n");
		printf("�Ӽ� : Ǯ\n");
		printf("HP : %d\n", Hp);
		printf("���ݷ� : %d\n", Atk);
		printf("���� : %d \n", Def);
		printf("=====================================\n");
	}
	else
		printf("�ùٸ� �� �Է�");
	


}