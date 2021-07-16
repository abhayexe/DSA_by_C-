#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void linkedlistTraversal(Node *ptr){  //for traversal
     while(ptr!=NULL){
         cout<<"Element: "<<ptr->data<<endl;
         ptr=ptr->next;
     }
}

//case 1: insertion at the begining of the linked list

struct Node * InsertionatFirst(Node *head,int data){
       Node *ptr = new Node;
       ptr->data=data;
       ptr->next=head;
       head=ptr;
       return head;
}

//case 2: insertion at the between

struct Node * InsertionAtIndex(Node *head,int data,int index){
    Node *p=new Node;
    Node *ptr=new Node;
    ptr->data=data;
    p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

//case 3: insertion at the end
struct Node * InsertionAtEnd(Node *head,int data){
    Node *p=new Node;
    Node *ptr=new Node;
    ptr->data=data;
    p=head;
    while(p->next!=NULL){
       p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

//case 4: insert after node

struct Node * InsertionafterNode(Node *head,Node *q,int data){
     Node *ptr=new Node;
     ptr->data=data;
     ptr->next=q->next;
     q->next=ptr;
     return head;
}

int main(){

    Node *first,*second,*third;
    first=new Node;
    second=new Node;
    third = new Node;

    first->data=23;
    first->next=second;

    second->data=44;
    second->next=third;

    third->data=88;
    third->next=NULL;

    cout<<"Linked list before Insertion"<<endl;
    linkedlistTraversal(first);
    // first=InsertionatFirst(first,21);
    // first=InsertionAtIndex(first,69,3);
    // first=InsertionAtEnd(first,100);
    first=InsertionafterNode(first,first,400);
    cout<<endl<<"Linked list after insertion"<<endl;
    linkedlistTraversal(first);
    return 0;
}