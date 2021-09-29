#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    
    int a,b,c,s,x,t;
    char f;
    int count = 1;
    while(1){
    srand((unsigned)time(NULL));
    a = (int)rand()%10;
    b = (int)rand()%10;
    c = (int)rand()%2;
    if(c == 1){
        f = '+';
        s = a + b;
    }
    else{
        f = '-';
        if(a < b){
            t = a;
            a = b;
            b = t;
            s = a - b;
            }
    }
    printf("%d %c %d = ",a,f,b);
    scanf("%d",&x);
    if(x == s) 
    {printf("yes,you are right!\n");
    if(++count >1) break;
    }
    else printf("oh, sorry!\n");}
    return 0;
}