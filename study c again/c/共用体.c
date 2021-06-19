#include<stdio.h>
union data{
    int a;
    char b;
    char c;
};
int main(){
    union data d = {1};
    d.b = 'c';
    printf("%c/n",d.a);
    return 0;
}