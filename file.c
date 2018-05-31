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
noc++;
if(ch==' ')
nob++;
if(ch=='\n')
not++;
if(ch=='\t')
not++;
}
fclose(fp);
printf(" \nnOF=%d",nof);
printf(" \nNoT=%d",not);
printf("\n nob =%d",nob);
printf("\n nOc=%d",noc);
}
