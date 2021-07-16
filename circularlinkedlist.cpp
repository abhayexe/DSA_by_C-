#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void traversal(Node *head){
    Node *ptr=new Node;
    ptr=head;
    while(ptr->next!=head){
        cout<<"Element: "<<ptr->data<<endl;
        ptr=ptr->next;
    }
    cout<<"Element: "<<ptr->data<<endl; 
}

struct Node * insertionAtfirst(Node *head,int data){
    Node *p=new Node;
    Node *ptr=new Node;
    ptr->data=data;
    p=head;
    while(p->next!=head){
        p=p->next;
    }
    //here p is pointing to the last node and now we assign p->next to the ptr
    p->next=ptr;
    //now we assign ptr->next to the head
    ptr->next=head;
    return ptr;  //since ptr is the new head now
}

struct Node * insertionatBetween(Node *head,int data,int index){
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

struct Node * insertionatEnd(Node *head,int data){
    Node *p=new Node;
    Node *ptr=new Node;
    p=head;
    ptr->data=data;
    while(p->next!=head){
        p=p->next;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;

}

int main(){
    cout<<"\t\t\t\tCircular Linked list operations"<<endl;

    Node *head,*second,*third;

    head=new Node;
    second=new Node;
    third=new Node;

    //linking the first and second nodes
    head->data=2;
    head->next=second;
 
    //linking the second and the third nodes
    second->data=11;
    second->next=third;

    //linking the third and the head node to make it circular linked list
    third->data=44;
    third->next=head;

    cout<<"Linked list before insertion"<<endl;
    traversal(head);   
    cout<<"\nLinked list after insertion"<<endl;
    // head=insertionAtfirst(head,100);
    // head=insertionatBetween(head,99,2);
    // head=insertionatEnd(head,77);
    traversal(head);
    return 0;
}