#include<stdio.h>
main()
{
    int n,count=0;
  printf("Enter a digit:");
  scanf(" %d",&n);
  while(n>0)
  {
   n=n/10;
   count++;
  }
  printf("The number of the digit is:%d",count);
}
