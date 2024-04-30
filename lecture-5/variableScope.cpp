#include<iostream>
using namespace std;

int main(){
	int a=2;
   cout<<a<<endl;//2 if we will not initialize a with 2 it will print some garbage value i.e 0 here 
    if(true){
    	int b=5;
    	cout<<b<<endl;//5
	}
	int b=3;
	cout<<b<<endl;//3
	//int b=6;// we cannot redeclare a variable in same scope
	cout<<b<<endl;//3
	int i=8;
	for(;i<8;i++){
		cout<<"Hi"<<endl;
	}
	
	if(i){
		int b;
		if(i){
			int b;
			if(i){
				int b;
				cout<<b;
			}
		}
		
	}
	
}


