#include<stdio.h>
#define FORMAT "%s! C is cool!\n"
int main(){
    int x = (int)3.8+3.3;
    x = (2 + 3)*10.5;
    x = 3.0/5 * 22.0;
    // x = 22.0*3/5;
    printf("%d\n",x);
    printf(FORMAT,FORMAT);
    return 0;
}