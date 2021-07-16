#include<iostream>
using namespace std;

struct stack{   //structure of the stack
     int size;
     int top;
     int *arr;
};

void traversal(stack *ptr){  //code for traversal
      int i=ptr->top;  //storing the value of top in i
      //checking if stack is not empty and top>=0,then continue printing
      while(ptr->top!=-1 && i>=0){
          //printing the data in the stack
          cout<<"Elements: "<<ptr->arr[i]<<endl;
        //   decreasing the i so that i should decrease to the lowest value
          i--;
      }
}

int IsEmpty(stack *ptr){   //checking if stack is empty or not
    if(ptr->size == -1){
        return 1;
    }else{
        return 0;
    }
}

int IsFull(stack *ptr){  //checking if stack is full or not
    if(ptr->top == ptr->size-1){
        return 1;
    }else{
        return 0;
    }
}

void push(stack *ptr,int value){  //push operation
    if(IsFull(ptr)){
        cout<<"stack overflow!"<<endl;
    }else{
        ptr->top++; //increasing the top variable by one
        ptr->arr[ptr->top]=value; //and assigning the value at increased top
    }
}

void pop(stack *ptr){  //function for deletion 
    if(IsEmpty(ptr)){
        cout<<"Stack Underflow!"<<endl;
    }else{
        ptr->top--; //simply decreasing the top so that the top value automatically gets deleted or can't be excessed
    }
}

int main(){

    //creating the stack
    
    stack *alam=new stack;

    alam->size=5;
    alam->top=-1;  //since the stack in empty we assign the value of top as -1
    alam->arr=new int[alam->size];

    //calling the push operation
    push(alam,2);
    push(alam,12);
    push(alam,44);
    push(alam,99);
    //calling the pop operation
    pop(alam);

    //calling the traversal function fro printing the values of stack
    traversal(alam);
    return 0;
}