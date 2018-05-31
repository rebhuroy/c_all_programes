#include<stdio.h>
void main()
{
int a[4];
int i,j,t=0,temp=0;
for(i=0;i<4;i++)
scanf("%d",&a[i]);
for(i=0;i<4;i++)
printf("\t%d",a[i]);
for(i=0;i<4;i++)
{
for(j=i+1;j<4;j++)
{

if(a[i]==a[j]&&i!=j)
{
t=1;
printf("\n%d",t);
t++;
}
}

}
}
