#include<iostream>
using namespace std;

void printarray(int a[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int Max(int a[],int n){
    int max=0;
    for (int i = 0; i < n; i++)
    {
        if(max < a[i]){
            max=a[i];
        }
    }
    return max;
}

void CountSort(int a[],int n){
    int i,j;
    int max=Max(a,n);
    
    //creating a duplicate count array
    int *count= new int[max+1];

    //assigning all elements of count array with 0
    for (i = 0; i < n; i++)
    {
        count[i] = 0;
    }

    // increasing the corresponding index in the count array
    for (i = 0; i < n; i++)
    {
        count[a[i]] = count[a[i]] + 1;
    }

    i=0; //counter the count array
    j=0; //counter the original array

    while (i<=max)
    {
        if(count[i] > 0){
            a[j] = i;
            count[i] = count[i] - 1;
            j++;  
        }
        else{
            i++;
        }
    }
}

int main(){

    int a[]={1,2,1,4,5,7};
    printarray(a,6);
    CountSort(a,6);
    printarray(a,6);
    
    return 0;
}