#include<iostream>

using namespace std;

int main(){
    int ival = 42;
    int *p = &ival;
    *p +=1;
    ival += 1;
    p = nullptr;
    cout<<"ival: "<<ival<<" *p: "<<*p<<endl;

    cout<<"p: "<<p<<endl;
    cout<<"&ival: "<<&ival;
    return 0;
}