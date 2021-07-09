#include<iostream>
using namespace std;


class Student{
public:    
    string name;
    string subject;
    int marks;
void intro()
{
    cout <<"name : " <<name <<endl<<"subject : "<<subject<<endl <<"marks : "<<marks;
}
};

int main()
{
    Student student1;
    student1.name="Akshay";
    student1.subject="C++";
    student1.marks=100;
    student1.intro();
}
