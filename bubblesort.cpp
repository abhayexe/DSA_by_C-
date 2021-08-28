#include<iostream>
using namespace std;

void traversal(int A[],int size){
    for (int i = 0; i < size; i++)
    {
         cout<<A[i]<<" ";
    }
    cout<<endl;
}

void Bubblesort(int A[],int size){
    int temp;
    int isSorted=0;
    for (int i = 0; i < size-1; i++)
    {
        cout<<"Number of pass: "<<i+1<<endl;
        isSorted=1;
        for (int j = 0; j < size-1-i; j++)
        {
            if(A[j] > A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                isSorted=0;
            }
        }
       if(isSorted){
           return;
       } 
    }
}

int main(){
    
    int A[]={1,2,3,4,5,6};
    int size=6;
    traversal(A,size);
    Bubblesort(A,size);
    traversal(A,size);
    return 0;
}