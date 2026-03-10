#include<stdio.h>
main()
{
    int a[100],i,n,item,pos=0;
    printf("Enter the element number:\n");
    scanf("%d",&n);
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
    }

    printf("Enter the item to search:\n");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(a[i]=item)
        {
           pos=i+1;
           break;
        }
    }
    if(pos==0)
       printf("\nItem not found");
    else
        printf("\n Item found at position:%d",pos);

}
