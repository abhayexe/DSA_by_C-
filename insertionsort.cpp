#include<iostream>
using namespace std;

void traversal(int a[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void insertionsort(int a[],int size){
    int key,j;
    for (int i = 1; i < size; i++)
    {
        cout<<"No of pass "<<i<<endl;
        key=a[i];
        j=i-1;
        while (j>=0 && a[j] > key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;    
    } 
}

int main(){

   int a[]={1,3,2,4,6,5};
   int size=6;
   traversal(a,size);
   insertionsort(a,size);
   traversal(a,size);

    return 0;
}