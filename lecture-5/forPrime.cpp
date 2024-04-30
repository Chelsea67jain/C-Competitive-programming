/*
Prime numbers:1,3,5,7,13,17
prime number is a number having only two factors
n%i should not be equal to 0 for a number to be prime

*/

#include<iostream>
using namespace std;

int main(){
 int n;
 cin>>n;
 bool isPrime=1;
 
  for(int i=2;i<=n-1;i++){
  	if(n%i==0){
  	//	cout<<"Number is not prime";
  		isPrime=0;
  		break;
  		
	  }
  }
  if(isPrime==0){
  	cout<<"Number is not prime";	
  }
  else{
  	cout<<"Number is prime";	
  }
 
 
 
}
