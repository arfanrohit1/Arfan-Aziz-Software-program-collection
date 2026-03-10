#include<stdio.h>
main()
{
char ch,line[50];
int c;
do
{
 ch=getchar();
line[c]=ch;
c++;
}
while(ch!='\n');
c=c-1;
line[c]='\0';
printf("\n%s\n",line);
}
