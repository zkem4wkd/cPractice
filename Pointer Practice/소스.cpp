#include <iostream>

using namespace std;

void Swap(int *a,int *b)
{
	int c = *b;
	* b = *a;
	*a = c;

}

int main()
{
	int a = 5, b = 10;
	int* Pa, * Pb;
	Pa = &a;
	Pb = &b;
	printf("a : %d b : %d\n", a, b);
	
	Swap(Pa,Pb);
	printf("a : %d b : %d\n", *Pa, *Pb);


	return 0;
}