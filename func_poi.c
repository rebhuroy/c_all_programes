#include<stdio.h>
int f(int **);
void main()
{
int *p,a=12;
p=&a;
printf("%d",f(&p));
}
int f(int **p)
{
printf("jmhbgkj");
 return **p;
}
