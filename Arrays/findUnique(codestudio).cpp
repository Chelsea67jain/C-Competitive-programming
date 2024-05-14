#include<iostream>
using namespace std;
// we will use the property of xor i.e a^a=0 and 0^a=a
int unique(int arr[],int size){
	int ans=0;
	for(int i=0;i<size;i++){
		ans=ans^arr[i];// 0*1=1^3^4^1^3=0^0^4=4
	}
	return ans;
}

int main(){
  int arr[5]={1,3,4,1,3};
  int u=unique(arr,5);
  cout<<"The unique element in an array is:"<<u<<endl;
  
  
}
