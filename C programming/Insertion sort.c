#include<stdio.h>
main()
{
    int a[100],i,j,n,temp;
    printf("Enter how many numbers to sort?\n Ans:");
    scanf("%d",&n);
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(temp<a[j]&&j>=0)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    for(i=0;i<n;i++)
        printf("%d",a[i]);
}
