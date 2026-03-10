#include<stdio.h>
main()
{
    int a[100],i,j,n,temp;
    printf("Enter how many numbers to sort:\n");
    scanf("%d",&n);
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
           if(a[j]>a[j+1])
           {
           temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
           }
        }
    }
    printf("\nAfter the sort the numbers are:\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}
