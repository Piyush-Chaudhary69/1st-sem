#include<stdio.h>
int main()
{
	int a;
	int *b;
	b=&a;
	printf("addres of a is %p",&b);
	printf("\n%d",&a);
	return 0;
}