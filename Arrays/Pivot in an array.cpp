#include<iostream>
using namespace std;

int getPivot(int arr[],int n){
  int s=0;
  int e=n-1;
  int mid=s+(e-s)/2;
  while(s<e){
  	// 1 st line
  	if(arr[mid]>=arr[0]){
  		s=mid+1;
	  }
	  else{ // 2 nd line
	  	e=mid;
	  }
	 mid=s+(e-s)/2; 
  }
  return s;
}

int main(){
	int arr[8]={11,3, 4, 5, 6, 7, 8, 9 };
	cout<<"The index of the pivot is: "<<getPivot(arr,8)<<endl;
}
