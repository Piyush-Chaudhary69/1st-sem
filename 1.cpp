#include<stdio.h>
int main()
{
   int a,b,c,d,total,k;

   printf("enter your mark\n");
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);
   scanf("%d",&d);
   total=a+b+c+d;
   printf("total mark is %d\n",total);
   
   if (total>=160) 
   {
   	printf("pass");
   }
   else
   {
   	printf("fail");
   }
   	
	return 0;
}