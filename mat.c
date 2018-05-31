#include<stdio.h>
#include<alloc.h>//contain malloc
#include<stdlib.h>//contain exit
void main()
{
//int a[12];
int **p;
int i,j;
p=(int **) malloc (3 * sizeof(int *)) ;//p=(float *) malloc (n * sizeof(float))
for(i=0;i<3;i++)
{
*p[i]=((int) malloc (3 * sizeof(int ))) ;
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&p[i][j]);
}
}
printf("THE ANS IS==============>\n");

}
