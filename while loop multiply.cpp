#include<stdio.h>
int main()
{
	int pro=1,count=1,num=1;
	printf("enter any number");
	scanf("%d",&num);
	
	while(count<=10)
	{
		pro=num*count;
		printf("%d*%d=%d\n",num,count,pro);
		count++;
	}
	return 0;
}