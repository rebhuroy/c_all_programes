#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
void create();
void dis();
struct node
{
int data;
struct node *next;
};
struct node *p;
struct node *f=NULL;
struct node *t,*t2;
void main()
{
int i,n,p;
//clrscr();
printf("NOM OF LINKED");
scanf("%d",&n);
for(i=0;i<n;i++)
create();
dis();
printf("NEW LIN SIZE");
scanf("%d",&p);
for(i=0;i<p;i++)
create();
dis();
}
void create()
{
int d;
p=(struct node *)malloc(sizeof(struct node));
if(p==NULL)
{
printf("no pos");
exit(1);
}
printf("ENTER");
scanf("%d",&d);
p->data=d;
//printf("enterd");
p->next=NULL;
if(f==NULL)
f=p;
else
{
t=f;
while(t->next!=NULL)
t=t->next;
t->next=p;
}
}
void dis()
{
struct node *local;
local=f;
while(local!=NULL)
{
printf("%4d",local->data);
local=local->next;
}
}
