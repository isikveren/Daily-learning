#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){


    vector<string> v1{"hello ","world!","!!!"};
    v1.push_back(" yeah!!!");

    cout<<v1[0][0]<<endl;
    for(auto c:v1)
        cout<<c;
    return 0;
}