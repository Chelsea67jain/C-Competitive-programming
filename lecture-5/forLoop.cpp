#include<iostream>
using namespace std;

int main(){
 int n;
 cin>>n;
 cout<<"Printing numbers from 1 to n:";
 int i=1;
 for(;;){
 	if(i<=n){
 			cout<<i<<endl;
	 }
   else {
   	break;// break is used to terminate the loop or come out of the loop
   }
 	i++;
 }
 // we can add multiple conditions, initializations, and updation inside for loop
 for(int a=0,b=1,c=2;a>=0&&b>=1&&c>=2;--a,--b,--c){
 cout<<a<<" "<<b<<" "<<c;	
 }
 
 
 
	
}


