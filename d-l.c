#include"stdio.h"
#include<alloc.h>
struct d_l
{
struct d_l *prv;
int d;
struct d_l *nxt;
}*ptr,*head=NULL,*t;
void creat();
void ins(struct d_l *);
void ins_at_beg();
void dis();
void creat_at_mid();
void del_at_beg();
void del_at_pos();
void main()
{
int i,j,n;
printf("N OF NODE");
scanf("%d",&n);
for(i=0;i<n;i++)
creat();
dis();
printf("\n");
/*ins_at_beg();
dis();
creat_at_mid();
dis();
del_at_beg();
dis();  */
 del_at_pos();
 dis();
}
void creat()
{
int dta;
ptr=(struct d_l *)malloc (sizeof(struct d_l));
printf("\nPLZ ENTER VAL");
scanf("%d",&dta);
ptr->prv=NULL;
ptr->d=dta;
ptr->nxt=NULL;
ins(ptr);

}
void ins(struct d_l *ptr)
{
 if(head==NULL)
 {
 head=ptr;
 }
else
{
t=head;
while(t->nxt!=NULL)
{
t=t->nxt;
}
t->nxt=ptr;
ptr->prv=t;
}
}
void dis()
{
struct d_l *loc;
loc=head;
printf("YOUR ENTERD ELEMEWNT IN LINKED LIST IS+=");
while(loc!=NULL)
{
printf("%4d",loc->d);
loc=loc->nxt;
}}
void ins_at_beg()
{
struct d_l *p;
int dta;
p=(struct d_l *)malloc(sizeof(struct d_l));
printf("PLZ ENTER VAL");
scanf("%d",&dta);
p->prv=NULL;
p->d=dta;
p->nxt=NULL;
 p->nxt=head;
 head->prv=p;
 head=p;
 }

 void creat_at_mid()
	{
	int dta,m_d;
	struct d_l *pt,*t2;
pt=(struct d_l *)malloc (sizeof(struct d_l));
printf("PLZ ENTER VAL");
scanf("%d",&dta);
pt->prv=NULL;
pt->d=dta;
pt->nxt=NULL;
printf("enter aftr which data data u want to ins");
scanf("%d",&m_d);
t=head;
while(t->d!=m_d)
{
t=t->nxt;
}
t2=t->nxt;
t2->prv=pt;
pt->nxt=t2;
t->nxt=pt;
pt->prv=t;
}
void del_at_beg()
{
t=head;
t=t->nxt;
t->prv=NULL;
head=t;
}
void del_at_pos()
{
struct d_l *t2;
int d_t;
printf("\nwhich node u want to del\n");
scanf("%d",&d_t);
t=head;
while(t->d!=d_t)
{
t=t->nxt;
}
t2=t->prv;

t2->nxt=t->nxt;
t->nxt=NULL;
t->prv=NULL;
t=t2->nxt;
t->prv=t2;
/*t->nxt=t2->nxt;
t2->nxt=NULL;
t2->prv=NULL;
t2=t->nxt;
t2->prv=t; */


}
