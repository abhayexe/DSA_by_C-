#include<iostream>
using namespace std;

struct Node{
   int data;
   Node *next;
};

void display(Node *ptr){
    while(ptr!=NULL){
        cout<<"Element: "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

struct Node * DeletionAtFirst(Node *head){
    Node *ptr=new Node;
    Node *q=new Node;
    q=head;
    head=head->next;
    delete q;
    return head;
}

struct Node * DeleteionAtIndex(Node *head,int index){
    Node *p=new Node;
    Node *q=new Node;
    p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    q=p->next;
    p->next=q->next;
    delete q;
    return head;
}

struct Node * DeletionAtEnd(Node *head){
    Node *p=new Node;
    Node *q=new Node;
    p=head;
    q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    delete q;
    return head;
}

struct Node * DeletionwithKey(Node *head, Node *key){
      Node *p= new Node;
      Node *q=new Node;
      p=head;
      q=head->next;
      while(q->data!=key->data && q->next!=NULL){
          p=p->next;
          q=q->next;
      }

      if(q->data==key->data){
          p->next=q->next;
          delete q;
      }
      return head;
}

int main(){

    Node *first,*second,*third;

    first = new Node;
    second = new Node;
    third = new Node;

    first->data=22;
    first->next=second;

    second->data=1;
    second->next=third;

    third->data=98;
    third->next=NULL;

    cout<<"Elements before deletion"<<endl;
    display(first);
    // first=DeletionAtFirst(first);
    // first=DeleteionAtIndex(first,1);
    // first=DeletionAtEnd(first);
    first=DeletionwithKey(first,third);
    cout<<endl<<"Elements after deletion"<<endl;
    display(first);
    return 0;
}