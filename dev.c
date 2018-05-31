#include<stdio.h>
int n;
int f();
void main()
{
int i;
printf("ENTER THE ARRAY OF NOS");
scanf("%d",&n);
for(i=0;i<n;i++)
printf("%4d",f());
}
int f()
{

int i=0,a[20];
static int k,p;
if(p==0)
{
for(i=0;i<n;i++)
scanf("%d",&a[i]);
p++;
}
return a[k++];

}