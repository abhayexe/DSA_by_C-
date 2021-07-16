#include<iostream>
using namespace std;

//creating the structure to store data and address of next node;
struct Node{
    int data;
    Node *next;
};

//function for traversal through linked lists
void linkedlistTraversal(Node *ptr){
    while(ptr!=NULL){    //checking if ptr is null or not
        cout<<"Element: "<<ptr->data<<endl;
        ptr=ptr->next;  //updating the ptr with next address
    }
}

int main(){

    //creating the node pointers;
    Node *first;
    Node *second;
    Node *third;
    Node *forth;


    //allocating the memory in the heap

    first = new Node;
    second = new Node;
    third = new Node;
    forth = new Node;

    //linking first and second node
    first->data=7;
    first->next=second;

    //linking second and third node
    second->data=11;
    second->next=third;

    //linking third and forth node
    third->data=66;
    third->next=forth;

    //terminating at forth node

    forth->data=77;
    forth->next=NULL;

    //calling the traversal function
    linkedlistTraversal(first);
    return 0;
}