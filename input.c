#include<stdio.h>

int main()
{
	int num[5];
	int i=0;
	//input in array
	
	for(i=0;i<=4;i++)
	{
		printf("\nEnter value for num[%d]: ",i);
		scanf("%d",&num[i]);
	}
	
	//output
	
	
/*	for(i=0;i<=4;i++)
	{
	printf("\n Value of num[%d] is %d",i,num[i]);
	} */
	
	printf("\n Value of num[4] is %d",num[4]);	
	
	
return 0;

}




