#include<stdio.h>
void main()
{
int t,i,j,a[10];
for(i=0;i<5;i++)
scanf("%d",&a[i]);
printf("before swap-->");
for(i=0;i<5;i++)
printf("%4d",a[i]);
printf("\n");
for(i=0;i<5;i++)
{
t=a[i];
j=i-1;
//printf("%8d",j);
while((t<a[j])&&(j>=0))
{
a[j+1]=a[j];
j--;
}
a[j+1]=t;
}
printf("\naftr s insertion short ");
for(i=0;i<5;i++)
printf("%4d",a[i]);

}
