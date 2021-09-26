#include <stdio.h>
int main ( )
 {
    float f,c;                      // 定义f和c为单精度浮点型变量 
    //f=64.0;                          // 指定f的值 
    printf("请输入华氏温度：");
    scanf("%f",&f);
    c=(5.0/9)*(f-32);               // 利用公式计算c的值  
    
    printf("f=%f\nc=%f\n",f,c);     // 输出c的值 
    return 0;
 
 }
