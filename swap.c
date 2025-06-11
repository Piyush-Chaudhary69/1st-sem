#include<stdio.h>
void swap(int *,int *);
int main()
{
	int n,b;
	printf("enter first num :");
	scanf("%d",&n);
	printf("enter second num :");
	scanf("%d",&b);
	printf("befour swaping n=%d,b=%d",n,b);
	swap(&n ,&b);
	printf("\nafter swaping n=%d,b=%d",n,b);
	return 0;
}

void swap(int *y,int *x)
{
	int tem;
    tem=*x;
	*x=*y;
	*y=tem;
}