#include <iostream>

int main() // 1~9�� ���
{

	for (int i=1; i < 10;i++)
	{
		printf("%d ��\n", i);
		for (int j = 1; j < 10; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}
	return 0;
}