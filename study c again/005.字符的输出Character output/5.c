#include <stdio.h>
#include<string.h>
int main()
{
    char ch1[] = "liuxunzi.com";
    char* ch = ch1;
    
    for(int i = 0;i<strlen(ch1);i++){
        //printf("%c",ch1[i]);
        printf("%c",*(ch++));
        printf(" ");
    }
    return 0;
}