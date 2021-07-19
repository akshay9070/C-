#include<iostream>
#include<string>
using namespace std;

class Binary{
    string s;
    public:
    void take_binary(void);
    void check_binary(void);
};

void Binary ::take_binary(){
    cout<<"Enter a binary String : "<<endl;
    cin>>s;
}

void Binary ::check_binary(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0' or s.at(i)=='1'){
            cout<<"Correct,It is Binary Format"<<endl;
        }
        else{
            cout<<"Not a Binary Format"<<endl;
        } 
    }
}


int main(){
    Binary a;
    a.take_binary;
    a.check_binary;
}
