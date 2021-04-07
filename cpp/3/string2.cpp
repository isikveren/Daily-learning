#include<iostream>

using namespace std;
void function();
void function2();
void function3();
void function4();
int main(){


    // string s1,s2;
    // cin >> s1 >> s2;
    // cout<<s1<<"\n"<<s2<< endl;
    function4();
    return 0;
}


void function(){
    string word;
    while(cin >> word){
        cout<<word<<endl;
    }
}

void function2(){

    string line;
    while(getline(cin,line))
        {cout<<line<<endl;
        cout<<line.size()<<endl;
        if(line == "quit")  break;}
    
}

void function3(){

    string s1 = "a";
    string s2 = "b";
    int signal = s1>s2? 1:0;

    cout<<signal<<  int('A'-'a')<<endl;
}

void function4(){

    string s1 = "hello, ",s2 = "world\n";
    string s3 = s1 + s2;
    cout<<s3<<endl;
}