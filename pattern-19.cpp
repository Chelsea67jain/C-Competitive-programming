/* for n=4
    1 i=1 
   22 i=2
  333 i=3
 4444 i=4
  for spaces we can use  n-i 
  and we have to print i  1,2,3,4 times that is i times
 
*/ 

#include<iostream>
using namespace std;
int main(){
	  int n;
	  cin>>n;
	  int i=1;
	  while(i<=n){
	  	int j=1;
	  	int space=n-i;
	  	// for spaces
	  	while(space){
	  		cout<<" ";
	  		space=space-1;
		  }
		  // for printing stars
		  
		 	while(j<=i){
			cout<<i;
		   j=j+1;
		}
		cout<<endl;
		i=i+1;
		
	  }
}
