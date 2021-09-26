#include<stdio.h>
#define pi 3.14159
int main(){
    // float r,area,cir;
    // int _1;
    // _1 = 2;
    // unsigned int uns = 2147483647;
    // uns = uns +3;
    int two = 2;
    for(int i = 0;i<29;i++){
        two*=2;
    }
    two *=2;
    int one = 2147483647;
    unsigned int one2;
    one2  = one * 2;
    one2 ++;
    printf("%d %u",two,one2);
    //printf("无符号整： %u\n",uns);
    //printf("%d",_1); 21473648
    return 0;
}