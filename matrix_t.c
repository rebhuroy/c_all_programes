#include<stdio.h>
void main()
{
int a[3][3];
int b[3][3];
int i,j;
printf("enter the matrix1\n");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
printf("The  matrix is \n"); 
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%4d",a[i][j]);
}
printf("\n");
}
printf("matrix transpose is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%4d",a[j][i]);
}
printf("\n");
}
}