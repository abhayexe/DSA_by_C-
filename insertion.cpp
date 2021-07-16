#include<iostream>
using namespace std;

void display(int arr[],int size){
    //code for traversal
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertion(int arr[],int size,int element,int capacity,int index){
      if(size>=capacity){
          cout<<"Aborting! Not enough space"<<endl;
      }
      
      else{
          for (int i = size-1; i >= index; i--)
          {
              arr[i+1]=arr[i];
          }

          arr[index]=element;
          cout<<"Insertion succesfully completed!"<<endl;
      }
}

int main(){
    cout<<"Insertion programe using c++!"<<endl;

    int arr[100]={4,55,22,33,11};

    int element=45,size=5,capacity=100,index=0;
    display(arr,size);
    insertion(arr,size,element,capacity,index);
    size++;
    display(arr,size);
    return 0;
}