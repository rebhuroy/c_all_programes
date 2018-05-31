#include<stdio.h>
#include<stdlib.h>
void main()
{
int marks;
printf("ENTER THE MARKS");
scanf("%d",&marks);
if((marks>=80)&&(marks<=100))
{
printf("later");
exit(1);
}
if((marks>=60)&&(marks<80))
{
printf("1st div");
exit(2);
}
if((marks>=45)&&(marks<60))
{
printf("2nd div");
exit(3);
}
if((marks>=25)&&(marks<45))
{
printf("3rd div");
exit(4);
}

else
printf("fail");
}