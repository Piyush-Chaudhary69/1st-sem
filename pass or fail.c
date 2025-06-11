#include<stdio.h>
int main()
{
	int a;
	printf("Enter mark: ");
	scanf("%d",&a);
	if (a>=55)
	{ 
	printf("you passed");
	}
	else if(a>100)
	{
		printf("wrong value");	
	}
	else 
	printf("you failed");
	return 0;
	
}