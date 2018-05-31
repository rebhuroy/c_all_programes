#include<stdio.h>
int p=5;
#define n 10
void main()
{
int i,a[n];
for(i=0;i<3;i++)
scanf("%d",&a[i]);
for(i=0;i<3;i++)
printf("%d",a[i]);
printf("\t%d",p);}
