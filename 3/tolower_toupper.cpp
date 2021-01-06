#include<iostream>
#include<cctype>
#include<string>


using namespace std;

int main(){


    
    char a[13] = "asdASDasdQWE";
    
    for(int i = 0;i<12;i++){

        a[i] = tolower(a[i]);
    }
    for(int i = 0;i<12;i++){

        a[i] = toupper(a[i]);
    }
    cout<<a<<endl;
}