#include<stdio.h>
void main()
{
int a[6];
int b[3];
int c[3];
int i;
printf("enter the matrix of a");
for(i=0;i<6;i++)
//a[i]=i;
{
scanf("%d",&a[i]);
}
printf("the a array is=");
for(i=0;i<6;i++)
{
printf("%2d",a[i]);
}
printf("\n1st mqat is:\n");
for(i=0;i<6;i++)
{
if(i%2==0)
{
b[i]=a[i];
printf("\t%d",b[i]);
}
//printf("the 2nd mat is\n");
else
{
c[i]=a[i];
printf("\n%d",c[i]);
 }
}

}