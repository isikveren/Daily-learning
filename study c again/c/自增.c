#include<stdio.h>

int main(){
    int a = 1;
    int b = (a++)+(a++);
    printf("%d %d",b,a);
    return 0;
}