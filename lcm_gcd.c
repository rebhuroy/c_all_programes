#include<stdio.h>
void main()
{
int n1,n2,prod,gcd=0,lcm;
printf("enter n1 and n2\n");
scanf("%d%d",&n1,&n2);
prod=n1*n2;
while(n1!=n2)
{
if(n1>n2)
{
n1=n1-n2;
}
if(n2>n1)
{
n2=n2-n1;
}
 }
gcd=n1;
printf("gcd=%d\n",gcd);
lcm=prod/gcd;
printf("lcm=%d",lcm);

}