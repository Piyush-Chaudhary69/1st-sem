#include<stdio.h>
#include<stdlib.h>
int main(){
	int i= 0, n= 0;
	printf("enter any number:");
	scanf("%d",&n);
	i=2;
	while(i<=n){
		if(i<=(n-1)){
			if(n%i==0){
				printf("not prime");
				exit(0);
			}
			else {
				i++;
				
			}
		}
			
		else {
			printf("prime");
			exit(0);
		}
		}
	
	return 0;
}