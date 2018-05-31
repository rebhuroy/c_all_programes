#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
void create();
void dis();
void create_at_beg();
void ins_at_mid();
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
int i,n;
//clrscr();
printf("NOM OF LINKED");
scanf("%d",&n);
for(i=0;i<n;i++)
create();
dis();
create_at_beg();
dis();
ins_at_mid();
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
void create_at_beg()
{
//struct node *t;
int d;
p=(struct node *)malloc(sizeof(struct node));
if(p==NULL)
{
printf("no pos");
exit(2);
}
printf("ENTER");
scanf("%d",&d);
p->data=d;
//printf("enterd");
p->next=NULL;
p->next=f;
f=p;
}
void ins_at_mid()
{
int d,pos;
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
printf("ENTER AFTER WHICH POS U WANTS TO INSERT");
scanf("%d",&pos);
t=f;
while(t->data!=pos)
{
t=t->next;
}
p->next=t->next;
t->next=p;

}
