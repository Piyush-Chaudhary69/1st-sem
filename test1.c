#include<stdio.h>
int main()
{
	int a[5],i=0;
	printf("enter num: ");
	scanf("%d",&a);
	for (i=0;i<=a;i++)
	{
		printf("enter value: ",a[i]);
		scanf("%d",&i);
	}
	return 0;
}
