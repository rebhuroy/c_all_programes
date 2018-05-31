#include<stdio.h>
void main()
{
int a[6];
int i;
for(i=0;i<6;i++)
scanf("%d",&a[i]);
printf("the identical array is:\n");
for(i=0;i<6;i++)
if(i%2==0) //use of'\0' fuction
{
printf("\t%d",a[i]*a[i]);
}
//else
//printf("\t%d",a[i]);
}