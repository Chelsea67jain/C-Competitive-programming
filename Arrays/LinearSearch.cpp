#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			return 1;
		}
	}
	return 0;
}

int main(){
	int number[10]={6,-7,8,0,43,32,20,22,5,9};
	int key;
	cout<<"Enter the key:";
	cin>>key;
	int n=10;
	bool found=search(number,n,key);
	if(found){
		cout<<"Key is found"<<endl;
	}
	else{
		cout<<"Key does not exist"<<endl;
	}
}
