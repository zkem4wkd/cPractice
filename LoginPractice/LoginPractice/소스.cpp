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
	else if (select > 3 || select == 0) {
		printf("�ùٸ� �� �Է�");
	}

	int input = 0;
	int exp = 10;
	printf("���� ������.\n");
	printf("1. �ο�� 2. ��������\n");
	scanf("%d", &input);
	Sleep(1000);
	printf("�ο��� �¸��ߴ�.\n");
	printf("����ġ�� %d ��ŭ �ö���.\n", exp);
	Sleep(1000);
	printf(".\n");
	Sleep(1000);
	printf("..\n");
	Sleep(1000);
	printf("...\n");	
	printf("������ ����Ͽ���.\n");
	Sleep(500);
	Hp = Hp + 8;
	Atk = Atk + 2;
	Def = Def + 1;
	printf("�ɷ�ġ�� ����Ͽ���. \nHP : %d / ���ݷ� : %d / ���� : %d\n", Hp, Atk, Def);

}