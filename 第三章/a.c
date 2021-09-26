#include<stdio.h>

int main(){

    int a = 12;
    a += a -= a *a;
    printf("%d\n",a);
    a = 12;
    a += a-=a*=a;
    printf("%d\n",a);

    int x = 289;
    char y = 'c';
    y = x;
    printf("%d",y);
    return 0;
}