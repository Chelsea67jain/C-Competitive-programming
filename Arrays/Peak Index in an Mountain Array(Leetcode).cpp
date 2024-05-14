#include<iostream>
using namespace std;

int peakIndex(int arr[],int n){
	  int s=0;// 0
	  int e=n-1;//2
	  int mid=s+(e-s)/2;//1
	  int ans=-1;
	  while(s<e){
	  	if(arr[mid]<arr[mid+1]){
	  		s=mid+1;
		  }
		  else{
		  	ans=mid;
		  	e=mid;
		  }
		  mid=s+(e-s)/2;
		
	  }
	  return ans;
	  
}

int main(){

int arr[4] ={0,10,5,2};
cout<<"The peak element of the array is:"<<peakIndex(arr,4);

}
