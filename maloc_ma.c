#include<stdio.h>
#include<alloc.h>
#include<stdlib.h>
void main()
{
int *a;
int *b;
int i,j;
printf("enter the matrix1\n");
a=(int*)malloc(3 * sizeof(int ));
b=(int*)malloc(3*sizeof(int ));
if((a==NULL)|| (b==NULL))
{
printf("full");
exit(1);
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
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
}