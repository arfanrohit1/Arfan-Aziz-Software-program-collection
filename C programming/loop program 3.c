#include<stdio.h>
main()
{
    int i,s,n;
    scanf("%d",&n);
    s=0;
    for(i=1;i<=n;i++)
    {
        s=s+i*i;
    }
  printf("The sum is:%d",s);
}
