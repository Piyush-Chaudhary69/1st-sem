#include<stdio.h>

void check(int n, int *p) 
{
    int i;
    for (i = 2; i < n; i++) 
	{
        if (n % i == 0) 
		{
            *p = 0;
        }
    }
}

int main() 
{

    int n, p = 1;
    printf("Enter a number:");
    scanf("%d", &n);

    check(n, &p);

    if (p == 1) 
	{
        printf("Number is prime:%d", n);
    } else 
	{
        printf("Number is not prime:%d", n);
    }

    return 0;
}