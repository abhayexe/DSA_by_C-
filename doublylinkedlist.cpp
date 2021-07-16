#include<iostream>
using namespace std;

struct Node{
   int data;
   Node *prev;
   Node *next;
};

void traversal(Node *head){
    Node *p=new Node;
    p=head;
    cout<<"Elements from first to last"<<endl;
    while(p->next!=NULL){
        cout<<"Elements: "<<p->data<<endl;
        p=p->next;
    }
    cout<<"Elements: "<<p->data<<endl;

    cout<<"\nElements from last to first"<<endl;
    while(p->prev!=NULL){
        cout<<"Elemnets: "<<p->data<<endl;
        p=p->prev;
    }
    cout<<"Elements: "<<p->data<<endl;
}

int main(){

    Node *head,*second,*third;

    head=new Node;
    second=new Node;
    third=new Node;

    head->data=22;
    head->prev=NULL;
    head->next=second;

    second->data=34;
    second->prev=head;
    second->next=third;

    third->data=45;
    third->prev=second;
    third->next=NULL;

    cout<<"\t\t\t\tDoubly Linked lists"<<endl;
    traversal(head);
    return 0;
}