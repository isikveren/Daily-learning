#include<stdio.h>

int main(){
    int a = 1;
    printf("a的地址：%p\n",&a);
    char c = '8';
    int x = c-'0';
    printf("c: %d\n",x);
    return 0;
}