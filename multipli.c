#include<stdio.h>
void main()
{
int a[3][3],b[3][3],i,k,j,c[3][3],d[3][3];
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%4d",a[i][j]);
}
printf("\n");
}
printf("new mat");
 for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
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
for(j=0;j<3;j++)
{
c[i][j]=0;
for(k=0;k<3;k++)
{
c[i][j]+=a[j][k]*b[k][j];
}
}
printf("ans is\n");


for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%4d",c[i][j]);
}
printf("\n");
}



printf("\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
d[i][j]=c[j][i];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%4d",d[i][j]);
}
printf("\n");
}

}