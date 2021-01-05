#include<iostream>

using namespace std;
int i = 43;
int main(){

    int i = 100;            //i会重新赋值
    int j = i;

    cout<< "i: "<< i << " j:"<<j << endl;  //result :　　　i: 100 j:100
    return 0;  
}