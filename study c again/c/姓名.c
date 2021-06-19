#include<stdio.h>

int main(){
    char x[40],m[40];
    printf("请输入姓：\n");
    scanf("%s",x);
    printf("请输入名：\n");
    scanf("%s",m);

    printf("您的姓名是：%s%s\n%lu， %lu",x,m,sizeof(x),sizeof(m));
    return 0;
}