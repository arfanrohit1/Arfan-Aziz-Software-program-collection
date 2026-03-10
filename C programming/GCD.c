#include<stdio.h>
main()
{
    int a,b,num1,num2,temp,gcd;
    printf("Enter the large number:");
    scanf("%d",&num1);
    printf("Enter the small number:");
    scanf("%d",&num2);
    a=num1;
    b=num2;
    for(;b>0;)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
        gcd=a;
        printf("The GCD is:%d",gcd);
}
