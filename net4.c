#include<stdio.h>
static int a=5;
int main(){
    int x;
    x=~a+a&a+a<<a;
    printf("%d",x);
    return 0;
}