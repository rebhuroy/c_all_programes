#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 30
char a[max];
int tos=-1;
void push(char );
char pop();
void main()
{
int i=0,op1,op2,v;
fflush(stdin);
gets(a);
while(a[i]!='\0')
	{
v=a[i];
if(v>='0' && v<='9')
push(v);
else
		{
op2=pop();
op1=pop();
//i++;
switch(v)
  {
case '+':push(op1+op2);
break;
case '-':push(op1-op2);
break;
case '*':push(op1*op2);
break;
case '/':push(op1/op2);
break;
default:
printf("wrong");
 }
//push(v);
		}
i++;
	}
//else
printf("\t%d",pop());
}
void push(char x)
{
if(tos==max-1)
{
printf("over flow");
exit(1);
}
else
a[++tos]=x;
}
char pop()
{
if(tos==-1)
{
printf("UNDER FLOW");
exit(2);
}
else
return (a[tos--]);

}