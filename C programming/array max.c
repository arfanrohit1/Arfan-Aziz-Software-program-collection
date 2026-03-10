#include<stdio.h>
#define n 5
main()
{
    int max[n],i,large;
    for(i=0;i<n;i++)
    {
     scanf("%d",&max[i]);
    }
    large=max[0];
    for(i=0;i<5;i++)
    {
     if(max[i]>large)

     large=max[i];
     else
        large=large;

    }
      printf("\n The large number is:%d",large);
}

