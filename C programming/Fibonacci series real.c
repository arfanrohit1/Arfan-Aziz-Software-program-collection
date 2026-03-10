#include<stdio.h>
main()
{
    int i,n,num1=0,num2=1,fibo=0;
    printf("Enter the number of term:");
scanf("%d",&n);
printf("Fibonacci Series\n");
for(i=0;i<=n;i++)
{
    if(i==0)
    {
        printf("%d ",num1);
        continue;
    }
    if(i==1)
    {
        printf("%d ",num2);
        continue;
    }
    fibo=num1+num2;
    num1=num2;
    num2=fibo;
    printf("%d ",fibo);
}
}
