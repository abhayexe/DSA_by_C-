#include<iostream>
using namespace std;

struct stack{
     int size;
     int top;
     int *arr;
};

//function to check if stack is empty

int isEmpty(stack *ptr){
    cout<<"Calling isEmpty Function!"<<endl;
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

//function to check if stack is full

int isFull(stack *ptr){
    cout<<"Calling isFull Function!"<<endl;
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    cout<<"\t\t\t\tStack Introduction"<<endl;
   
   //creating a stack
    stack *s;
    s->size=3;
    s->top=-1;
    s->arr=new int[s->size];

    s->arr[0]=22;
    s->top++;
    cout<<s->top<<endl;
    cout<<s->arr[0]<<endl;
    // s->arr[1]=11;
    // s->top++;
    // s->arr[2]=99;
    // s->top++;

    //checking if stack is full

    int x=isEmpty(s);
    cout<<x<<endl;

    if(isFull(s)){
        cout<<"The stack is Full!"<<endl;
    }
    else{
        cout<<"The stack is not full"<<endl;
    }

    if(isEmpty(s)){
        cout<<"The stack is Empty!"<<endl;
    }
    else{
        cout<<"The stack is not empty!"<<endl;
    }
    
    return 0;
}