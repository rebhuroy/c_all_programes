#include<stdio.h>
int main(){
    int x,a=2;
    x=++a,++a,a++;
    printf("%d  %d",x,a);
    return 0;
}