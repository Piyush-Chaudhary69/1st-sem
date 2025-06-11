#include<stdio.h>
#include<math.h>
 int main () 
 {
 	int n=0,remain=0,arm= 0,temp1,temp;
 	int count=0;
 	printf("enter any number : ");
 	scanf("%d",&n);
 	temp =n;
 	temp1=n;
 	while (n>0) 
	 {
 		n=n/10 ;
 		count++;
	 }
 	while(temp>0)
	 {
 		remain=temp%10 ;
 		arm=arm+pow(remain,count);
        temp=temp/10;
	 }
	if (arm == temp1) {
		printf("armstrong number.");
		
	}
	else {
		printf("not armstrong");
		
	}
     
 	return 0;
 }