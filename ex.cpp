#include<stdio.h>
void main()
{
FILE *fp;
char ch;
fp=fopen("bass.txt","r");
while(1)
{
ch=fgetc(fp);
if(ch==EOF)
break;
printf("%c",ch);
}
fclose(fp);
}


