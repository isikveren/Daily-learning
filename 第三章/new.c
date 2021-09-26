#include<stdio.h>
#include<math.h>

int main(){

    int i = 1,x;
    printf("%d\n",i++);
    printf("%d\n",++i);

    x = i++;
    printf("%d %d\n",x,i);
    x = ++i;
    printf("%d %d\n",x,i);
    x = 6+i++;
    printf("%d %d\n",x,i);
    x = 3+(++i);
    printf("%d %d\n",x,i);

    int a,b = 1,c = 2;
    //a = b = c;
    a = c>0; //关系运算符 优先级大于赋值运算符

    printf("%d %d %d\n",a,b,c);

    return 0;
}
