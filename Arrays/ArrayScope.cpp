#include<iostream>
using namespace std;

void update(int arr[],int size){
	arr[0]=120;
	cout<<"Printing array inside function"<<endl;
	
	 for(int i=0;i<size;i++){
  	cout<<arr[i]<<" ";  	
  }
  
}

int main(){
  int arr[10]={1,3,6,7,2,9,4,90,5,54};
  int size=10;
  cout<<"Before calling function"<<endl;
  for(int i=0;i<size;i++){
  	cout<<arr[i]<<" ";
  	
  }
  cout<<endl;
update(arr,size);
 cout<<"After calling function"<<endl;
  for(int i=0;i<size;i++){
  	cout<<arr[i]<<" ";
  	
  }

	
}
