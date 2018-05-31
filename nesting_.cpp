#include<stdio.h>
struct a
{
int l;
};
struct b
{
a p;
};
void main()
{
b o;
o.p.l=12;
//o.l=10;
printf("%d",o.p.l);
}