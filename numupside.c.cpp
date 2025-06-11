#include<stdio.h>
 int main () 
 {
 int i=0,j=0,k=0;
for(i=5;i>=1;i--)
{
	for(j=5;j>=6-i;j--)
	{
		printf("%d",j);
	}
	printf("\n");
}
	return 0;
 
}