#include<stdio.h>
#include<string.h>
int main(){
    printf("_Bool : %lu\n",sizeof(_Bool));
    printf("int : %lu\n",sizeof(int));
    printf("char : %lu\n",sizeof(char));
    char s[] = "liu";
    printf("string: %lu\n",strlen(s));
    return 0;
}