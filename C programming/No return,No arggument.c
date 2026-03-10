#include<stdio.h>
void sum();
void sub();
void sum()
{
    int a=10,b=5,c;
    c=a+b;
    printf("%d\n",c);
}
void sub()
{
  int a=35,b=25,c;
  c=a-b;
  printf("%d",c);
}
void main()
{
    sum();
    sub();
}
