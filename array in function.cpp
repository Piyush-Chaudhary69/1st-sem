//pasing array into function
#include<stdio.h>

void keep(int x[]);
int main()
{
	int a[5]={10,20,30,40,50};
	keep (a);
	return 0;
}
void keep(int m[])
{
	int i;
	printf("\n hello");
	for(i=0;i<5;i++)
	{
	printf("\n %d",m[i]);	
	}

}