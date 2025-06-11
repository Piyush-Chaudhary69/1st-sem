//wap to ask 10 number from the user and display greatest as well as smallest 

#include<stdio.h>

int main () {
	int i=0,n=0,lg=0,sm=0,elem=0;
	
	printf("enter total number of element ");
	scanf("%d",&elem);
	printf("enter first number ");
	scanf("%d",&n);
	lg=n;
	sm=n;
	
	for(i=1;i<=elem-1;i++)
	{
		printf(" enter another number ");
		scanf("%d",&n);
		if (n>lg)
		lg=n;
		if (n<sm)
		sm=n;
	}
	   
	printf ("the largest number is%d",lg);
	printf ("\nthe smallest number is%d",sm);
	
		
	return 0;

	//int a=0,gt=0,st=9999;
//	int x;
	
	
//	for(x=1;x<=10;x++){
//		printf("enter a number:");
//		scanf("%d"&a);
	//	if (a>gt){
		//	gt=a;
		//}
//		else if(a<st) {
	//		st=a;
		//}
//	}
}