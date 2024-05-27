#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
	 for(int i=1;i<n;i++){
         bool swapped=false;
        // for rounds from 1 to n-1
        for(int j=0;j<n-i;j++){
              // for elements from j to n-i
              if(arr[j]>arr[j+1]){
                  swap(arr[j],arr[j+1]);   
                  swapped=true;
              }
             
            
        }
        if(swapped==false){
            break;
        }
        
    }
}
int main(){
	int arr[]={6,2,8,4,10};
    bubbleSort(arr,5);
    for(int i=0;i<5;i++){
    	cout<<arr[i]<<" ";
	}
}
