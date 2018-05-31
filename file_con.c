#include<stdio.h>
void main()
{
FILE *fp;
char ch;
int nof=0,not=0,nob=0,noc=0;
fp=fopen("prog1.c","r");
while(1)
{
ch=fgetc(fp);
if(ch==EOF)
break;

printf("%c",ch);
}
}

