#include<stdio.h>
int main()
{
	int p=0,i=0,count=0,j=0;
	int num[10];
	for(i=0;i<=9;i++)
	{
		printf("\n enter num[%d]:",i);
		scanf("%d",&num[i]);
	}
	for(i=0;i<=9;i++)
	{
		for(j=1;j<=num[i];j++)
		{
			if(num[i]%j==0)
			{
				count++;                                                       
			}
		
  	 	}
			if(count==2)
			{
				p++;
			}

		count=0;
	}
				printf("the count of prime num is %d",p);

	return 0;
}