#include"stdio.h"
#include"conio.h"
void main()
{
int a[20],i,j,t,n;
clrscr();
printf("enter the num of arr");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
//for(i=0;i<n;i++)
//printf("%4d",a[i]);
for(i=0;i<n;i++)
	{
j=i+1;
t=a[j];
//printf("%4d",t);
while((t<a[j-1])&&(j>0))
	{

	a[j]=a[j-1];
		j--;
	}
	a[j]=t;
		}
	printf("\naftr sorting \n");
	for(i=0;i<n;i++)
printf("%4d",a[i]);
//getch();
}