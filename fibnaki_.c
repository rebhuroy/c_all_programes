#include<stdio.h>
int fib(int );
void main()
{
int a,i,n;
scanf("%d",&n);
for(i=0;i<n;i++)
fib(i);
for(i=0;i<n;i++)
printf("%d\t",fib(i));
}
int fib(int F)
{
int fib1,fib2,fibo;
if((F==0)||(F==1))
return F;
fib1=fib(F-1);
fib2=fib(F-2);
fibo=fib1+fib2;
return fibo;
}
