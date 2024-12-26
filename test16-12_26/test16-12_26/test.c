#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct book
{
	char name[10];
	char author[10];
	int  price ;
	
};
void print1(struct book* p)
{
	printf("%s,%s,%d", p->author, p->name, p->price);
}
int main()
{

	struct book b1 = { "yang","gang",1 };
	struct book b2;
	b2.price = 1;
	
	printf("%s,%s,%d\n", b1.author, b1.name, b1.price);
	print1(&b1);
	return 0;
	
}