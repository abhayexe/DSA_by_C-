#include<iostream>
using namespace std;

struct stack{
   int top;
   int size;
   char *arr;
};

int isFull(stack *ptr){
    if(ptr->top >= ptr->size){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(stack *ptr){
    if(ptr->top == -1){
        return 1;
    }else{
        return 0;
    }
}

void push(stack *ptr,char val){
     if(isFull(ptr)){
         cout<<"stack is overflow!"<<endl; 
     }else{
         ptr->top++;
         ptr->arr[ptr->top]=val;
     }
}

char pop(stack *ptr){
    if(isEmpty(ptr)){
        cout<<"Stack is underflow!"<<endl;
    }else{
        char val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int isMatch(char a,char b){
    if((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']')){
        return 1;
    }else{
        return 0;
    }
}

int parenthesisMatch(char *exp){
    stack *ptr=new stack;
    ptr->top=-1;
    ptr->size=100;
    ptr->arr=new char[ptr->size];

    for (int i = 0; exp[i]!='\0'; i++)
    {
    if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
        push(ptr,exp[i]);
    }
    else if(exp[i]==')' || exp[i]=='}' || exp[i]==']'){
        if(isEmpty(ptr)){
            return 0;
        }else{
            char pooped=pop(ptr);
            if(!isMatch(pooped,exp[i])){
                   return 0;
            }
        }
    }
    }

    if(isEmpty(ptr)){
        return 1;
    }else{
        return 0;
    }
    
}

int main(){
   
    char *exp="()*[3*4]";

    if(parenthesisMatch(exp)){
        cout<<"parenthesis is balanced"<<endl;
    }else{
        cout<<"Parenthesis is not balanced"<<endl;
    }
    
    return 0;
}