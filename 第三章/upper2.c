#include<stdio.h>

int main(){
    char ch;
    while(1){
    scanf("%c",&ch);
    ch = (ch >='A'&&ch<='Z')?(ch + 32):ch;
    printf("%c",ch);
    if(ch == 'z') break;
    }
    return 0;
}