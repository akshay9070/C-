#include<iostream>
using namespace std;

int main()
{
    int num,a=0;
    cout<<"enter number : ";
    cin >>num;
    while(a<=10)
    {
        cout <<num<<"*"<<a<<" = "<<num * a << endl;
        a++;
    }
}
