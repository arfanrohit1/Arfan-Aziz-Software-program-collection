#include<stdio.h>
main()
{
    int a,b,num1,num2,temp,gcd,lcm;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
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
        lcm=(num1*num2)/gcd;
        printf("The GCD is:%d\n",gcd);
        printf("The LCM is:%d",lcm);
}
