#include<iostream>
using namespace std;

int main()
{
    int age;
    cout <<"Enter Your Age : \n";

    cin >>age;
    
    if(age>=18)
    {
        cout <<"You Are Eligible to Vote";
    }
    else
    {
        cout <<"Sorry : You Are NOT Eligible to Vote ";
    }

    return 0;
}
