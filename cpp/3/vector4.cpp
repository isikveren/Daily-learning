#include<iostream>
#include<string>
#include<cctype>
#include<vector>

using namespace std;

int main(){

    vector<string> str;
    string s;
    while(1)
    {cin>>s;
    if(s == "quit")  break;
    str.push_back(s);
    }
    for(int j = 0;j<str.size();j++)
       {for(int i = 0;i<str[j].size();i++)
            {str[j][i] = toupper(str[j][i]);}}

    for(auto str_son:str)
        cout<<str_son<<endl;
    return 0;
}