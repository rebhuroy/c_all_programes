#include<stdio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],i,j,k,sum=0,m,n,p,q;
printf("ENTER THE ROW AND COLUMN OF 1ST MATRIX");
scanf("%d%d",&m,&n);
printf("ENTER THE ROW AND COLUMN OF 2ND MATRIX");
 scanf("%d%d",&p,&q);
printf("ENTER 1ST MATRIX");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("ENTER 2ND MATRIX");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&a[i][j]);
}
}
if(n!=p)
{
printf("not possible");
}
else
{
for(i=0;i<m;i++)
	  {
for(j=0;j<q;j++)
 {
for(k=0;k<p;k++)
{
sum=+a[i][k]*b[k][j];
c[i][j]=sum;
sum=0;
}
	}
			}
}

for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
printf("%4d",c[i][j]);
}
printf("\n");
}

}
