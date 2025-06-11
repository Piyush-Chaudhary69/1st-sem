#include<stdio.h>

int main () {
	int i= 0, n= 0,temp=0, rev = 0, remain = 0;
	printf("enter  any number:");
	scanf("%d",&n);
	
	for(temp=n;n>0;n=n/10) {
		remain= temp%10;
		rev= remain * 10 + rev ;
	}
	printf("the reverse number is: %d",rev);
	return 0;
}

