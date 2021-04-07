#include<iostream>

using namespace std;

void swap(int &x,int &y){
    int tmp;
    tmp = x;
    x = y;
    y = tmp;

}

void swap2(int *x,int *y);

int main(){
    int a = 1,b = 2;
    swap2(&a,&b);
    cout<<"a: "<< a <<" b: "<< b << endl;
    swap(a,b);
    cout<<"a: "<< a <<" b: "<< b << endl;
    return 0;
}
void swap2(int *x,int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;

}

