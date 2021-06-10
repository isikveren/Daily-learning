//例题1.3 求两整数中较大者

#include<stdio.h>
int Max(int a,int b){

    return a>b?a:b;
}

int main(){
    int a,b;
    printf("Please input two number:");
    scanf("%d%d",&a,&b);
    //int max = a>b?a:b;
    int max = Max(a,b);
    printf("The max num of a and b is %d\n",max);
    return 0;
}
