#include<stdio.h>
void main()
{
int i=1;
for(i=1;i<=5;i++)
{
if(i%2==0)
continue;
else
printf("%d\n",i);
}
}
