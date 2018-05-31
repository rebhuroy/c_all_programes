#include<stdio.h>
#include<alloc.h>
#include<stdlib.h>
int tos=-1;
int a[20];
void create();
void dis(int );
void push(int,int  );
int pop();
struct node
{
int data;
struct node *next;
};
struct node *p;
struct node *f=NULL;
struct node *t;
void main()
{
int i,n;
//clrscr();
printf("NOM OF LINKED");
scanf("%d",&n);
for(i=0;i<n;i++)
create();
dis(n);

printf("\n");
for(i=0;i<n;i++)
printf("%4d",pop());
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
void dis(int n)
{
int k;
struct node *local;
local=f;
while(local!=NULL)
{

k=local->data;
printf("%4d",k);
push(k,n);
local=local->next;
}
}
void push(int k,int max )
{
if(tos==max-1)
{
printf("over flow");
exit(1);
}
else
a[++tos]=k;
}
int pop()
{
if(tos==-1)
{
printf("UNDER FLOW");
exit(2);
}
else
return (a[tos--]);
}
