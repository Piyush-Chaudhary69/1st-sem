#include<stdio.h>
int main()
{
	int i=0,j=0;
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
		    printf("# ");
		}
	 printf("\n");	
	}
	return 0;
}