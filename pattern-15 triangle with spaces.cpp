/*   
for n=4
     * i=1 
    ** i=2
   *** i=3
  **** i=4
  spaces=n-i;
  
*/ 

#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
   int j=1;
   // printing spaces
   int spaces=n-i;
   while(spaces){
   	cout<<" ";
   	spaces=spaces-1;
   }
   // for printing stars
   while(j<=i){
   	cout<<"*";  
   	j=j+1;
		  }
	      cout<<endl;
	      i=i+1;
	      
  }	
}

