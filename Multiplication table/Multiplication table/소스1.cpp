#include <iostream>

int main1() // ���� �Է¹޾Ƽ� ���
{

	int i;
	printf("number : ");
	scanf("%d", &i);

		printf("%d ��\n", i);
		for (int j = 1; j < 10; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}

	return 0;
}