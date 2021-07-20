#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* link;
};

int main(){
    Node* head;
    Node* first;
    Node* second;
    Node* third;

    first = new Node();
    second = new Node();
    third = new Node();

    first->data=10;
    second->data=20;
    third->data=30;

    first->link=second;
    second->link=third;
    third->link=NULL;

    head=first;

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->link;
    }


}
