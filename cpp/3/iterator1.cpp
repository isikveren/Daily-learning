#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

    vector<string> str;
    string s;
    while(1)
    {
        cin>>s;
        if(s == "quit")
            break;
        str.push_back(s);
    }
    auto v = str.begin();
    v++;
    auto it = v->begin();
    *it = toupper(*it);
    cout<<*v<<endl;
    return 0;
}