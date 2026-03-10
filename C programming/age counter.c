#include<stdio.h>
 main()
{
    int count=0,i=0,age;
    printf("Enter age of 15 people:\n");
do
{
       scanf("%d",&age);
       i=i+1;
}
while(i<10);
if(age>0&&age<=5)
    {
    count++;
    printf("Still a baby:%d",count);
    }
else if(age>=6&&age<=17)
    {
        count++;
    printf("Attending school:%d",count);
    }

else
    {
          count++;
            printf("Adult life:%d",count);
}
}







