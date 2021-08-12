#include<iostream>
using namespace std;

struct Queues{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(Queues *ptr){  //function to check Queues if full or not
    if(ptr->r == ptr->size-1){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(Queues *ptr){ //function to check Queues is empty or not
    if(ptr->f == ptr->r){
        return 1;
    }else{
        return 0;
    }
}

void enqueues(Queues *ptr,int val){
    if(isFull(ptr)){
        cout<<"Queues overflow"<<endl;
    }else{
        ptr->r++;
        ptr->arr[ptr->r]=val;
    }
}

int dequeue(Queues *ptr){
    int pooped = -1; //indicates that something is wrong if dequeue not done.i.e return -1
    if(isEmpty(ptr)){
        cout<<"No element to dequeue"<<endl;
    }else{
        ptr->f++;
        pooped = ptr->arr[ptr->f];
    }
    return pooped;
}

void traversal(Queues *ptr){  //func to traversal
    int trave = ptr->f;
    trave++;
    while(trave<=ptr->r){
       cout<<"Elements :"<<ptr->arr[trave]<<endl;
       trave++;
    }
}

void printpopedelem(int x){  //func to print pooped element
    cout<<"The element "<<x<<" is pooped!"<<endl;
}

int main(){
    cout<<"Queues using array!"<<endl;

    Queues *ptr=new Queues;
    ptr->size = 10;
    ptr->f=ptr->r = -1;
    ptr->arr= new int[ptr->size];

    enqueues(ptr,20);
    enqueues(ptr,2);
    enqueues(ptr,10);
    enqueues(ptr,34);
    enqueues(ptr,3);
    enqueues(ptr,60);
    int pop = dequeue(ptr);
    printpopedelem(pop);
    traversal(ptr);

    return 0;
}