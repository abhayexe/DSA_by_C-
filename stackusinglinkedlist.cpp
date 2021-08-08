#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

int peek(int pos,Node *head){
    Node *ptr=new Node;
    ptr=head;
    for (int i = 0; (i<pos-1 && ptr!=NULL); i++)
    {
        ptr=ptr->next;
    }

    if(ptr!=NULL){
        return ptr->data; 
    }
    else{
        return -1;
    }  
}

int stacktop(Node *head){
     return head->data;
}

int main(){
    cout<<"Stack using linked list!"<<endl;

    Node *head,*second,*third;

    head=new Node;
    second=new Node;
    third=new Node;

    head->data=11;
    head->next=second;

    second->data=22;
    second->next=third;

    third->data=17;
    third->next=NULL;

    int req=peek(2,head);
    cout<<"The element at position 1 is "<<req<<endl;

    int top=stacktop(head);
    cout<<"The top element is "<<top<<endl;
    return 0;
}