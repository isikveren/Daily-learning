#include<stdio.h>

int main(){
    double a = 1.0;
    printf("%20.15f\n",a/3);

    float b;
    b = 10000/3.0;
    printf("%f\n",b);
    printf("%-25.15f\n%25.15f",b,b);
    
    return 0;
}