#include<iostream>
using namespace std;

int main()
{
    int choice;
    do{
    cout <<"1.First Case\n";
    cout<<"2.Second Case\n";
    cout <<"3.Exit\n";
    cout<<"Enter Your Choice : \n";
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            cout <<"This is First Case\n";
            break;   
        }
        
        case 2:
        {
            cout <<"This is Second Case\n";
            break;   
        }
        case 3:
        {
           exit(0);   
        }
        default:
        cout<<"Invalid Choice\n";
    }}while(1);
   
}
