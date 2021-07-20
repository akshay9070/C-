#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*link;
};


//Traversing Linked List
void traverse(Node*n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->link;
    }
}

//Inserting Node at Front
void insetAtfront(Node**head,int value){
    Node *newnode=new Node();
    newnode->data=value;
    newnode->link=*head;
    *head=newnode;
}


//Inserting Node at end
void insertAtEnd(Node**head,int value){
    Node* newnode=new Node();
    newnode->data=value;
    newnode->link=NULL;
    Node* temp=*head;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=newnode;
    
}

//Inserting After Given Node
void insertAfternode(Node*previous,int value){
    if(previous==NULL){
        cout<<"can't be NULL"<<endl;
        return;
    }
    Node* newnode=new Node();
    newnode->data=value;
    newnode->link=previous->link;
    previous->link=newnode;
    
}



int main(){
    Node* head;
    Node* first;
    Node* second;
    Node* third;


    //Memory Allocaion
    first=new Node();
    second=new Node();
    third=new Node();

    //Data of nodes
    first->data=10;
    second->data=20;
    third->data=30;
    //Linking Nodes
    first->link=second;
    second->link=third;
    //head Pointing to first node
    head=first;
    
    insetAtfront(&head,7);
    insetAtfront(&head,5);
    insertAtEnd(&head,12);
    insertAfternode(second,15);
    traverse(head);
    





}
