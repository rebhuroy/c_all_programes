#include<stdio.h>
#include<alloc.h>
#include<stdlib.h>
struct x
{
int *arr;
int n,i;
};
struct x *p;

void main()

{
p=(struct x *)malloc(sizeof(struct x));
scanf("%d",&p->n);
p->arr=(int *)malloc((p->n)*sizeof(int ));
for(p->i=0;p->i<p->n;p->i++)
scanf("%d",&p->arr[p->i]);
for(p->i=0;p->i<p->n;p->i++)
printf("%d\t",p->arr[p->i]);
//printf("%d",p->n);
}
