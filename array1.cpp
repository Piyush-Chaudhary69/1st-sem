#include<stdio.h>
int main()
{
int i=0,sum=0;
int num[10],count1=0,count2=0;

for(i=0;i<=9;i++)
{
	printf("enter a number");
	scanf("%d",&num[i]);


if(num[i]%2==0)
	{
		count1++;
	}
	else
	{
		count2++;
	}
}
printf("no. fo even is %d and no. of odd is %d",count1,count2);

return 0;
}