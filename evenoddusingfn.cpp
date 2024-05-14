#include<iostream>
using namespace std;

bool isEven(int n){
	//for odd number n&1 is 1 so it returns 0 else 1
	if(n&1){
	 /*int num=n&1;
	 cout<<num;*/
		return 0;
	}
	else{
		return 1;
	}
}
int main(){
	int number;
	cin>>number;//5
	if(isEven(number)){
		cout<<"Number is Even"<<endl;
	}
	else{
			cout<<"Number is Odd"<<endl;
	}
}
