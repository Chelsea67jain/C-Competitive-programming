/*
 1234554321
 1234**4321
 123****321
 12******21
 1********1
*/ 
#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		// for printing 1st number pattern
		int end=n-i+1;
		
		while(j<=end){
			cout<<j;
			j=j+1;
		}
		//for star pattern
		int stars=0;
		if(i>1){
			stars=2*(i-1);
		}
		while(stars){
			cout<<"*";
			stars=stars-1;
		}
		
		int startNo=n-i+1;
		while(startNo){
			cout<<startNo;
			startNo=startNo-1;
		}
		
	cout<<endl;
	i=i+1;
	}
	
}


