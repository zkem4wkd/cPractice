#include <iostream>

using namespace std;
int main()
{
	int i = 0;

	while (i <= 20)
	{
		i++;
		if (i % 2 == 1) continue;
			printf("%d\n", i);
	}

	return 0;
}