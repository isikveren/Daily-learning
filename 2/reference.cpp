#include<iostream>

using namespace std;

int main(){

    int ival = 1;
    int &refval = ival;    //引用等于取别名 都是指的同一个目标地址
    refval = 2;
    //int &x  = 1;  引用必须有引用对象 不可直接赋值
    cout<<"ival: "<<ival<<" refval: "<<refval<<endl;
    return 0;
}