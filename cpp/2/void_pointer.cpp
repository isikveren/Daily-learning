#include<iostream>

using namespace std;

int main(){
    double obj = 3.14, *pd = &obj;

    void* pv = &obj;   //pv指向的内容不可访问
    pv = pd;

    cout<<*pd<<" "<<endl; 

    return 0;
}