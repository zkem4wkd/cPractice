#include <iostream>

int main1() // 숫자 입력받아서 출력
{

	int i;
	printf("number : ");
	scanf("%d", &i);

		printf("%d 단\n", i);
		for (int j = 1; j < 10; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}

	return 0;
}