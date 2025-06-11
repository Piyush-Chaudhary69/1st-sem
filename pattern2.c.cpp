#include<stdio.h>
 int main () 
 {
 int i=0,j=0,k=0;
for(i=1;i<=5;i++)
{
	for(k=2;k<=i;k++)
	{
		printf(" ");
	}
	for(j=i;j<=5;j++)
	{
		printf("%d",j);
	}
	printf("\n");
}
	return 0;
 
}
