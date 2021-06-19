#include<stdio.h>

int main(){
    char a;
    a = getchar();  //
    a = (a>='A'&&a<='Z')?(a+32):a;
    putchar(a);
    printf("\n");
    return 0;
}