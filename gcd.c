#include<stdio.h>
void main()
{
int n1,n2,prod,gcd;
printf("enter n1 and n2\n");
scanf("%d%d",&n1,&n2);
prod=n1*n2;
while(n1!=n2)
{
if(n1>n2)
{
n2=n1-n2;
}
if(n2>n1)
{
n1=n2-n1;
}
//return n1;
}
gcd=n1;
printf("%d",gcd);
}
