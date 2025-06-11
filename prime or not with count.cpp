#include<stdio.h>
#include<stdlib.h>
int main(){
	int i= 0, n= 0, count= 0;
	printf("enter any number:");
	scanf("%d",&n);
	i=1;
	while(i<=n){
		if(n%i==0){
			count++;
		}
		i++;
	}
	if(count > 2){
		printf("not prime");
	}
	else {
		printf("prime");
	}
}