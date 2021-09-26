#include<stdio.h>

int main(){
    int x = 456;

    int a,b,c;

    a = x/100;
    b = x%100/10;
    c = x%10;

    printf("百位数：%d，十位数：%d，个位数：%d",a,b,c);
    return 0;
}