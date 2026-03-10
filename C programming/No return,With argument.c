#include<stdio.h>
void sum(int x,int y);
void sub(int x,int y);
void sum(int x,int y)
{
    int c;
    c=x+y;
    printf("%d\n",c);
}
void sub(int x, int y)
{
    int c;
    c=x-y;
    printf("%d",c);
}
void main()
{
  int a=20,b=10;
  sum(a,b);
  sub(a,b);
}
