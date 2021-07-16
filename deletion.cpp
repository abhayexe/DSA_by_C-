#include<iostream>
using namespace std;

void display(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void deletion(int arr[],int size,int index){
       for (int i = index; i < size-1; i++)
       {
           arr[i]=arr[i+1];
       }
       
}

int main(){
    cout<<"Hello World!"<<endl;
    int size=6;
    int arr[20]={3,4,5,11,12};
    display(arr,size);
    deletion(arr,size,3);
    size--;
    display(arr,size);
    return 0;
}