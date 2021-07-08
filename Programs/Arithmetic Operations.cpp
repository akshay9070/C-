#include<iostream>
using namespace std;

int main()
{
    int a,b,add,sub,mul,div;

    cout <<"Enter two number for arithmetic  operation : ";

    cin >> a >> b;

    cout <<"a = "<< a << "\nb = " << b << endl;
    add = a + b;
    sub = a-b;
    mul = a*b;
    div = a/b;

    cout << a << "+" << b << " = "<< add << endl;
    cout << a << "-" << b << " = "<< sub << endl;
    cout << a << "*" << b << " = "<< mul << endl;
    cout << a << "/" << b << " = "<<div << endl;
    return 0;
     
}
