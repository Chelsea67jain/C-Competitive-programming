#include<iostream>
using namespace std;

void printArray(int arr[],int size){
	
		for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int number[15];
	cout<<"Value at index 14: "<<number[14]<<endl;
	
	// we will get some garbage value here but if compile this code in vs code we will get error
	cout<<"Value at index 15: "<<number[20]<<endl;
	
	int second[3]={4,7,8};
	cout<<"Value at 2nd index: "<<second[2]<<endl;
	
	// starting two elements will be initialized with 2 and 7 and rest with 0
	int third[15]={2,7};
	int n=15;
printArray(third,n);
	
	// initiliazation with 0
	int fourth[10]={0};
		n=10;
printArray(fourth,n);


	// initiliazation with 1 is not possible in this case
	// 1st element will be 1 rest will be 0
	int fifth[10]={1};
		n=10;
printArray(fifth,n);
	
	
	
}
