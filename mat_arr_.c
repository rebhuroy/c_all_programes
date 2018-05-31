#include<stdio.h>
#include<alloc.h>//contain malloc
#include<stdlib.h>//contain exit
void main()
{
int **p;
int i,j,n,f;
printf("enter the value of original array\n");
scanf("%d",&n);
 printf("enter the value of NEXT SIZE\n");
scanf("%d",&f);

p=(int **) malloc (n * sizeof(int *)) ;//p=(float *) malloc (n * sizeof(float))
for(i=0;i<n;i++)
{
p[i]=((int *) malloc (f * sizeof(int ))) ;
}
for(i=0;i<n;i++)
{
for(j=0;j<f;j++)
{
printf("ENTER THE MATRIX OF ELEMENT");
scanf("%d",&p[i][j]);
}
}
printf("THE ANS IS==============>\n");
for(i=0;i<n;i++)
{
for(j=0;j<f;j++)
{
printf("%4d",p[i][j]);
}
printf("\n");
}


}