#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
	
	 for(int i=1;i<n;i++){
        // for rounds
        int temp=arr[i];
           int j=i-1;
        while(j>=0){
             if(arr[j]>temp){
                 arr[j+1]=arr[j];
             }
             else{
                 break;
             }
             j--;
        }
        arr[j+1]=temp;
    }
}

void printArray(int arr[],int n){
	 for(int i=0;i<n;i++){
	 	cout<<arr[i]<<" ";
	 }
}

int main(){
	int arr[]={10,1,7,4,8,2,11};
	
	insertionSort(arr,7);
	printArray(arr,7);
	
}
