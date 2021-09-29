#include<stdio.h>
int main(){
    int s=0, x;
    printf("x="); 
    scanf("%d",&x);

    switch(x)
    {
        case 1:s+=3; //break;
        case 2:s++;  break;
        case 3:s*=2; break;
        default: s+=5;
    }
    printf("s=%d\n",s);
    return 0;
}