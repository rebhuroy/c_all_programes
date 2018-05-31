#include<stdio.h>
#include<stdlib.h>
void create();
void display();
struct node
{
int data;
struct node *next;
};
struct node *ptr;
struct node *first=NULL;
struct node *temp;

void main()
{
int i,l;
printf("ENTER THE VALUE OF LENTH");
scanf("%d",&l);
for(i=0;i<l;i++)
create();
display();
}
void create()
{
int k;
ptr=(struct node *)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("no space ");
exit(1);
}
printf("\nENTER THE DATA");
scanf("%d",&k);
ptr->data=k;
printf("data has sucessfully entered\n ");
ptr->next=NULL;
printf("next part is null  ");
if(first==NULL)
{
first=ptr;
printf("===========>first ");
}
else
{
temp=first;
while(temp->next!=NULL)
{
temp=temp->next;
printf("\n\ttemp=temp->next");
}
temp->next=ptr;
printf("\n\ttemp->next=ptr");
}
}
void display()
{
struct node *p;
int v=0;
p=first;
while(p!=NULL)
{
v+=p->data;
printf("%d\t",p->data);
p=p->next;
}
printf("%d",v);
}
