#include<stdio.h>
int main(){
    register a,b,x;
    scanf("%d %d",&a,&b);
    x=a+~b;
    printf("%d",x);
    return 0;
}