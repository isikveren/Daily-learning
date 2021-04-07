#include<iostream>
#include<cctype>
#include<string>


using namespace std;

int main(){


    
    string a = "asdASDasdQWE";
    
    for(int i = 0;i<a.size();i++){

        a[i] = tolower(a[i]);
    }
    
    cout<<a<<endl;
}