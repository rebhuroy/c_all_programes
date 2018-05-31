#include<stdio.h>
void main()
{

int deci,i=0,n=0,v[20],binary,k;
printf("ENTEWR A DECIMAIL NUMBER\n");
scanf("%d",&deci);
k=deci;
while(deci!=0)
{
v[i]=deci%2;
printf("%4d",v[i]);
deci=deci/2;
i++;
n++;
}
printf("\nYOUR DECIMAQI NUBER IS==:%d  ",k);
printf("YOUR DECIMAIL EQUIVALENT  BINARY NUBER IS:==>");
for(i=n-1;i>=0;i--)
printf("%8d",v[i]);
}
