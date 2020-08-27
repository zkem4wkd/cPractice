#include <iostream>
#include <stdlib.h>
#include <windows.h>

char name[50]{ '\0' };
int a = 0;

int main()
{
	/*char job1[40] = "Student";
	char job2[40] = "Principal";
	char job3[40] = "°¡³ª´Ù";

	printf("job1 length : %d\n",strlen(job1));
	printf("job2 length : %d\n",strlen(job2));
	printf("name length : %d\n",strlen(name));
	printf("name length : %d\n",strlen(job3));

	strcpy_s(name,strlen(job1)+1, job1);*/

	a += 1; 

	printf("%d \n",a);

	int b = 0;
	int c = 0;

	printf("a = %d, b = %d\n", b, c);
	b += 20;
	c += 40;

	printf("b = %d, c=%d\n", b, c);
	Sleep(1000);

	main();

	printf("x");

	return 0;
}
