#include<stdio.h>
void main()
{
int a,temp,rem,i,fact=1,z=0;
printf("enter anos");
scanf("%d",&a);
temp=a;
while(a!=0)
{
rem=a%10;
for(i=1;i<=rem;i++)
{
fact=fact*i;
printf("fACT=%d\n",fact);
}
z+=fact;
fact=1;
a=a/10;
}
printf("%d\t",z);
if(z==temp)
printf("krishnamurti number");
else
printf("author nos");
}
