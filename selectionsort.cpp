#include<iostream>
using namespace std;

void traversal(int a[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void selectionsort(int a[],int size){
    cout<<"Selection sort algorithm..."<<endl;
    int indexofmin,temp;
    for (int i = 0; i < size-1; i++)
    {
        indexofmin=i;
        for (int j = i+1; j < size; j++)
        {
            if(a[j] < a[indexofmin]){
               indexofmin=j;
            }
        }
        temp=a[i];
        a[i]=a[indexofmin];
        a[indexofmin]=temp;   
    }  
}

int main(){

    int a[]={3,2,1,6,5,4};
    int size=6;
    traversal(a,size);
    selectionsort(a,size);
    traversal(a,size);
    return 0;
}