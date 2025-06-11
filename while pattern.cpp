#include<stdio.h>
int main()
{
	int i=1, j=1, k=4;
	while (i<=4)
	{
		while (k>=i)
		{
			printf(" ");
			
		k--;
	}
		while (j<=2*i-1)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
