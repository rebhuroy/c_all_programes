#include<stdio.h>
void main()
{
int a[10];
int i;
for(i=0;i<10;i++)
a[i*2]=1;
for(i=0;i<10;i++)
a[(i*2)+1]=-1;
for(i=0;i<10;i++)
printf("%d",a[i]);}