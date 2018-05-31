#include<stdio.h>
int gcd(int ,int);
void main()
{
int m,n,res;
printf("Enter the value of m and n\n");
scanf("%d%d",&m,&n);
res = gcd(m,n);
printf("GCD(%d,%d) = %d\n",m,n,res);
}
int gcd(int m , int n)
{
if(n==0) return m;
if(m<n) return gcd(n,m);
return gcd(n , m % n);
}