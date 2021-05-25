// 比较两个实数的大小，输出是保留整数使用%.0f,%3.0f表示整数部位取三位，小数保留0位
#include<stdio.h>

int main(){
    float num1,num2;
    printf("Please input two numbers:");
    scanf("%f%f",&num1,&num2);
    printf("The max number of %.0f and %.0f is %.0f.\n",num1,num2,num1>num2?num1:num2);
    return 0;
}