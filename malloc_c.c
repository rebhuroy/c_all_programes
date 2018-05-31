#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,*p;
scanf("%d",&n);
//p=(int *)malloc(2);
p=(int *)calloc(n,2);
if(p==NULL)
printf("FAIL");
else
printf("pass");}
