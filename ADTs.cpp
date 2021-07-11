#include<iostream>
using namespace std;

class myArray{
    public:
    	int total_size;
    	int used_size;
    	int *ptr;
  	
    void createarray(myArray *arr,int tsize,int usize){  //func to crarry
    	 arr->total_size=tsize;
    	 arr->used_size=usize;
    	 arr->ptr=new int[tsize];
    	 cout<<"array created succesfully!"<<endl;
	}
	
	void setarray(myArray *arr){  //func to setarray
		int n;
		cout<<arr->used_size<<endl;
		for(int i=0;i<arr->used_size;i++){
			cout<<"Enter the elements at position "<<i<<endl;
			cin>>n;
			(arr->ptr)[i]=n;
		}
	}	
	
	void printarray(myArray *arr){ //func to printaryy
		cout<<"We are in printarray function"<<endl;
		for(int i=0;i<arr->used_size;i++){
			cout<<"The elements at position "<<i<<" is "<<*(ptr+i)<<endl;
		}
	}
};

int main(){
	myArray alam;    //creating object
	alam.createarray(&alam,6,3); //calling the createarry function
	alam.setarray(&alam); //calling the setarry function
	alam.printarray(&alam);  //calling the printarry function
	return 0;
}
