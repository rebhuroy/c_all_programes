#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
void create();
void dis();
void create_at_beg();
void ins_at_mid();
void del_at_beg();
void del_at_pos();
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
 printf("\nINS AT BIGINING");
create_at_beg();
dis();
 printf("\nINS AT a position");
ins_at_mid();
dis();
 printf("\ndel AT BIGINING");
  del_at_beg();
  dis();
	printf("\ndel AT pos");
	del_at_pos();
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
void del_at_beg()
{
t=f;
f=t->next;
t=NULL;
free(t);
}

void del_at_pos()
{
int pos;
//t,t2;
t=f;

printf("EDNTER POS");
scanf("%d",&pos);
while(t->data!=pos)
{
t2=t;
t=t->next;
//t2=t->next;
}
t2->next=t->next;
t->next=NULL;
free(t);
}
