//swap
#include<stdio.h>
void swap(int* a,int* b);
void printhello();
int main(){
    int a,b,temp;
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a = %d, b = %d\n",a,b);
    printhello();
    return 0;
}
void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printhello(){
    printf("hello\n");
}