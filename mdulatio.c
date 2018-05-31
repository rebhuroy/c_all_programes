#include<stdio.h>
void main()
{
int num;
printf("enter a no");
scanf("%d",&num);
if(num<0)
{
num=(num)*(-1);
printf("num %d",num);
}
else
printf("num=%d",num);}
