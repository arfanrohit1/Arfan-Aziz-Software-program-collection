#include<stdio.h>
void main()
{
    int i,n,fact;
    printf("Enter an integer to determine factorial of the number:");
    scanf("%d",&n);
    fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of %d is:%d",n,fact);
    }
