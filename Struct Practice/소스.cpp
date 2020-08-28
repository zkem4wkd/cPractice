#include <iostream>

struct book
{
	char title[30];
	char author[30];
	int price;
};

void BookOutput(struct book name)
{
	printf("Title : %s\n", name.title);
	printf("Author : %s\n", name.author);
	printf("Price : %d\n", name.price);
}


int main()
{
	struct book Book1;
	Book1 = { " The Book ","Mr.D",30000 };
	struct book* PtrBook1;
	PtrBook1 = &Book1;

	strcpy_s((*PtrBook1).title, "Bookname");
	BookOutput(Book1);


	return 0;
}