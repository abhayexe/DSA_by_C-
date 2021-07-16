#include<iostream>
using namespace std;

int Bsearch(int arr[],int size,int element){
    int low,mid,high;
    low=0;
    high=size-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
    
}

int main(){
    int arr[]={1,2,3,44,55,66,76,77};
    int size=sizeof(arr)/sizeof(int);
    int element=55;
    int search=Bsearch(arr,size,element);
    cout<<"The element "<<element<<" is found at index "<<search<<endl;
    return 0;
}