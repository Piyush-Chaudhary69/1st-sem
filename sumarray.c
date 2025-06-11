#include<stdio.h>

int main()
{
	int num[10],sum=0,i=0;
	//input array and for calculating sum
	for(i=0;i<=9;i++)
	{
		printf("\n Enter value of num[%d]: ",i);
		scanf("%d",&num[i]);
		sum=sum+num[i];
	}
	//output array
	for(i=0;i<=9;i++)
	{
		printf("\n Value of num[%d] is %d ",i,num[i]);
		
	}


	printf("\n Sum =%d",sum);
	
	
//	printf("\n Sum =%d",sum);
	return 0;
}