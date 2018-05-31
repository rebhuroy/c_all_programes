#include<stdio.h>
void main()
{
int a=-1,b=1,c,i,n;
scanf("%d",&n);
printf("THE SEREASE IS===========>\n");
for(i=0;i<n;i++)
{
c=a+b;
printf("%d\n",c);
a=b;
b=c;
}}
