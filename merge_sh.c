#include<stdio.h>
void main()
{
int i,j,k,a1[20],a2[20],ul[40],n1,n2,n3;
printf("ENTER 1ST array size");
scanf("%d",&n1);
printf("ENTER 2nd array size");
scanf("%d",&n2);
printf("ENTER 1st array \n");
for(i=0;i<n1;i++)
{
printf("enter :");
scanf("%d",&a1[i]);
}
printf("ENTER2nd array \n");
for(j=0;j<n2;j++)
{
printf("enter :");
scanf("%d",&a2[j]);
}
printf("1st aaray is:\n");
for(i=0;i<n1;i++)
{
printf(":%d\n",a1[i]);}
printf("2nd aaray is:\n");
for(j=0;j<n2;j++)
{
printf("::::%d\n",a2[j]);
	}
n3=n1+n2;
printf("\nsizeof the ultimate array is %d\n",n3);
i=j=0;
for(k=0;k<n3;k++)
{
if(a1[i]<a2[j])
{
ul[k]=a1[i];
i++;
}
else
{
ul[k]=a2[j];
j++;
}
}
printf("your shorted  aaray is:\n");
for(k=0;k<n3;k++)
{
printf(":%d\n",ul[k]);}

}
