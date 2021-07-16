#include<iostream>
using namespace std;

int lsearch(int arr[],int size,int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element)
        return i;
    }
    return -1;
    
}

int main(){

    int arr[100]={2,3,11,222,33,11,9,8,7,6,55};
    int size=sizeof(arr)/sizeof(int);
    int element=55;
    int index=lsearch(arr,size,element);
    cout<<"The element "<<element<<" is found at position "<<index<<endl;

    return 0;
}