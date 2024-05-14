#include<iostream>
using namespace std;

int main(){
	int arr[5]={2,3,4,5,6};
    
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	int num[5]={}; // 0 0 0 0 0
	for(int i=0;i<5;i++){
		cout<<num[i]<<" ";
	}
	cout<<endl;
/*	int num[5]={0};
		for(int i=0;i<5;i++){
		cout<<num[i]<<" ";
	}
	this initialization is same as the above all the elements will be initialized to 0 */
   
   // initialize the array with same value first method
  /* int a[5]={[0...4]=3};
   	
		for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
 this iniliazation is not valid here it is only valid for gcc compiler
	*/

// second method
int a[5];
int val=5;
for(int i=0;i<5;i++){
	a[i]=val;
}
for(int i=0;i<5;i++){
	cout<<a[i]<<" ";
}

	
}
