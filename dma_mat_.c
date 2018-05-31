#include<stdio.h>
#include<alloc.h>//contain malloc
#include<stdlib.h>//contain exit
void main()
{
int **p,**q,**c;
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
printf("your 1st mat was scanned please enter 2nd mat ");
q=(int **) malloc (n * sizeof(int *)) ;//p=(float *) malloc (n * sizeof(float))
for(i=0;i<n;i++)
{
q[i]=((int *) malloc (f * sizeof(int ))) ;
}
for(i=0;i<n;i++)
{
for(j=0;j<f;j++)
{
printf("ENTER THE 2nd MATRIX OF ELEMENT");
scanf("%d",&q[i][j]);
}
}  c=(int **) malloc (n * sizeof(int *)) ;
  for(i=0;i<n;i++)
{
c[i]=((int *) malloc (f * sizeof(int ))) ;
}

printf("THE ANS IS==============>\n");
for(i=0;i<n;i++)
{
for(j=0;j<f;j++)
{
printf("%4d",c[i][j]=p[i][j]+q[i][j]);
}
printf("\n");
}
free(*p);
free(*q);
free(*c);

}