#include<iostream>
using namespace std;

int findMin(int num[],int size){
	int min=INT_MAX;
	for(int i=0;i<size;i++){
		if(num[i]<min){
			min=num[i];
		}
	}
	return min;
	
}
1 2 3 4 5
int findMax(int num[],int size){
	int maxi=INT_MIN;
	for(int i=0;i<size;i++){
	maxi=max(num[i],maxi);
	/*	if(num[i]>max){
			max=num[i];
		}*/
	}
	return maxi;
	
}


int main(){
	int size;
	cin>>size;
	int a[100];
	
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	
	cout<<"Maximum value is:"<<findMax(a,size)<<endl;
		cout<<"Minimum value is:"<<findMin(a,size)<<endl;
	
}

