/* for n=4
****
 ***
  **
   *
  for spaces we can use  i-1 \
 
*/ 

#include<iostream>
using namespace std;
int main(){
	  int n;
	  cin>>n;
	  int i=1;
	  while(i<=n){
	  	int j=1;
	  	int space=i-1;
	  	// for spaces
	  	while(space){
	  		cout<<" ";
	  		space=space-1;
		  }
		  // for printing stars
		  int end=n-i+1;
		 	while(j<=end){
			cout<<"*";
		   j=j+1;
		}
		cout<<endl;
		i=i+1;
		
	  }
}
