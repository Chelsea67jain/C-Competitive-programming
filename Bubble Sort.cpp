#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
	 int swaps=0;
	 for(int i=1;i<n;i++){
         bool swapped=false;
        
        // for rounds from 1 to n-1
        for(int j=0;j<n-i;j++){
              // for elements from j to n-i
              if(arr[j]>arr[j+1]){
                  swap(arr[j],arr[j+1]);   
                  swapped=true;
                  swaps++;
              }
             
            
        }
        if(swapped==false){
            break;
        }
        
    }
    cout<<swaps<<endl;
}
int main(){
	int arr[]={8,22,7,9,31,5,13};
    bubbleSort(arr,7);
    for(int i=0;i<7;i++){
    	cout<<arr[i]<<" ";
	}
}
