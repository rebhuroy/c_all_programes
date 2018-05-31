#include<stdio.h>
void main()
{
int a[3][3];
int b[3][3];
int c[3][3];
int i,j;
printf("enter the matrix1\n");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%4d",a[i][j]);
}
printf("\n");
}
printf("enter the matrix2\n");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%4d",b[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]-b[i][j];
}
c[i][j]=0;
}
printf("after substraction new matrix is \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%4d",c[i][j]);
}
printf("\n");
}


  }