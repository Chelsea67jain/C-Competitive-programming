#include<iostream>
using namespace std;

bool uniqueOccurence(int arr[],int size){
	int ans=0;
	for(int i=0;i<size;i++){
		ans=ans^arr[i];
	}
	if(ans%2==0){
		return true;
	}
	else{
		return false;
	}
}

int main(){
  int arr[6]={1,2,2,1,1,3};
  int answer=uniqueOccurence(arr,6);
  cout<<answer;
  
  
}




