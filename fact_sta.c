#include<stdio.h>
#include<stdlib.h>
#define max 5
int tos=-1;
int a[max];

void push(int );
int pop();
void main()
{
  int i,n,fac=1;
  scanf("%d",&n);
  for(i=n;i>0;i--)
  {
  push(i);
  }
  for(i=0;i<max;i++)
  printf("\n\t%d\t",fac*=pop());
  //pop();
}
void push(int x)
{
//int a[max];
if(tos==max-1)
{
printf("over ");
exit(1);
}
else
a[++tos]=x;
}
int pop()
{
//int z[tos];
if(tos==-1)
{
printf("under flow ");
exit(2);
}
//printf("\nvvvvv%d",a[tos]);
return (a[tos--]);
}