#include<stdio.h>
main()
{
    int a[100],first,last,mid,n,item,c=0,i;
    printf("Enter the number of element:");
    scanf("%d",&n);
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the item to search:\n");
    scanf("%d",&item);
    first=0;
    last=n-1;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(a[mid]==item)
        {
            c++;
            break;
        }
        else if(a[mid]<item)
            last=mid-1;
        else
            first=mid+1;
    }
    if(c==1)
        printf("Item is found");
    else
        printf("Item not found");
}
