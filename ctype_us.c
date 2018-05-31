#include<stdio.h>
#include<ctype.h>
void main()
{
char ch;
scanf("%c",&ch);
if(isalpha(ch)>0)
printf("it is a charecter ");
if(isdigit(ch)>0)
printf("IT IS A DIGIT");
if(isspace(ch)>0)
printf("IT IS A SPACE ");
if(ispunct(ch)>0)
printf("it IS PUNK");
}

