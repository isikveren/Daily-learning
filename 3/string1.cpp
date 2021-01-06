#include<iostream>
#include<string>

using namespace std;

int main(){
    string s(10,'c');
    string s2(s);
    int n;
    cin >>n;
    string s3(n,'x');
    cout << s2 << endl;
    cout << s << endl;
    cout<<s3<<endl;
    return 0;
}