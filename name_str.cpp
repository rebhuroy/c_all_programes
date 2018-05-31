#include<stdio.h>
#include<string.h>
void main()
{
int i,w,p;
char str[]="REBHU";
printf("\n");
for(i=0;i<=6;i++)
{
p=i+1;
printf("\n %-6.*s",p,str);
}
printf("\n");
for(i=6;i>=0;i--)
{
p=i+1;
printf("\n %-6.*s",p,str);
}


}