#include <stdio.h>

int main(void)
{
	//char type
	char Char = 'a';
	char Hello = 'H';

	printf("%c\n", Char);
	printf("%c\n", Hello);

	//int type
	int Attack = 10;
	int Guard = 10;
	int MP = 5;

	printf("AP:%d\nGP:%d\nMP:%d\n", Attack, Guard, MP);

	//float type

	float VectorX = 10.5;
	float VectorY = 20.8;

	printf("%.1f\n%.1f\n", VectorX, VectorY);

	//data type

	char a;
	short m;
	int b;
	long k;
	float c;
	double s;

	printf("char : %d byte \n", sizeof(a));
	printf("short : %d byte \n", sizeof(m));
	printf("int : %d byte \n", sizeof(b));
	printf("long : %d byte \n", sizeof(k));
	printf("float : %d byte \n", sizeof(c));
	printf("double : %d byte \n", sizeof(s));

}