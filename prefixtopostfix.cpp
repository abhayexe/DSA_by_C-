#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<cstring> //to use strlen in c++
#include<strings.h>
#include<string>
using namespace std;

struct  stack  //creating the structure of stack
{
    int top;
    int size;
    char *arr;
};

int isEmpty(stack *ptr){ //function to check if stack is empty
    if(ptr->top == -1){
        return 1;
    }else{
        return 0;
    }
}

int isFull(stack *ptr){ //function to check is stack is full
    if(ptr->top >= ptr->size){
        return 1;
    }else{
        return 0;
    }
}

void push(stack *ptr,char val){ //for pushing in stack
    if(isFull(ptr)){
        cout<<"Stack overflow!"<<endl;
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}

char pop(stack *ptr){ //for pooping from the stack
    char value = ptr->arr[ptr->top];
    ptr->top--;
    return value;
}

int stacktop(stack *ptr){ //to return the top element of stack
    return ptr->arr[ptr->top];
}

int isoperator(char ch){ //to check if character is operator
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/' ){
        return 1;
    }else{
        return 0;
    }
}

int precedence(char ch){ //comparing the precedence
    if(ch=='*' || ch=='/'){
        return 3;
    }
    else if(ch=='-' || ch=='+'){
        return 2;
    }else{
         return 0;
    }
}

char *infixToPostfix(char *infix){ //for converting infix to postfix
    stack *sp=new stack;
    sp->top=-1;
    sp->size=100;
    sp->arr=new char[sp->size];

    char *postfix=new char[strlen(infix)+1]; //creating a postfix array of size same as infix
    int i=0; //traversal through infix
    int j=0; //postfix filler

    while(infix[i]!='\0'){ //checking if infix[i] is null
        if(!isoperator(infix[i])){
           postfix[j] = infix[i];
           j++;
           i++;
        }
        else{
            if(precedence(infix[i]) > precedence(stacktop(sp))){
                    push(sp,infix[i]);
                    i++;
            }
            else{
                postfix[j] = pop(sp);
                j++;
            }
        }
    }

    //popping the remaining operator from stack
    while(!isEmpty(sp)){
        postfix[j] = pop(sp);
        j++;
    }

    //assign '\0' at the end of postfix

    postfix[j] = '\0';
    return postfix;
}

int main(){

  //expression
    char *infix="x-y/z-R*d";

    printf("postfix is %s", infixToPostfix(infix));

    return 0;
}