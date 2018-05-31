#include<stdio.h>
#include<alloc.h>//contain malloc
#include<stdlib.h>//contain exit
void main()
{
//int a[12];
float *p;
int i,n;
printf("enter array lenth\n");
scanf("%d",&n);
p=(float *) malloc (n * sizeof(float)) ;
if(p==NULL)
{
printf("FULL");
exit(1);
}
for(i=0;i<n;i++)
{
printf("enter");
scanf("%f",&p[i]);
}
printf("THE ANS IS==============>\n");
for(i=0;i<n;i++)
{
printf("%.2f\t",p[i]);}

}

