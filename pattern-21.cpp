/* for n=4
       1  i=1
     2 3  i=2 
   4 5 6  i=3
 7 8 9 10 i=4
  for spaces we can use n-i 
  and will use count=1;
  
*/ 

#include<iostream>
using namespace std;
int main(){
	  int n;
	  cin>>n;
	  int i=1;
	int count=1;
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
		  	cout<<count;
		  	count=count+1;
		  	j=j+1;
		  }
		cout<<endl;
		i=i+1;
		 
		}	
		
 }
 

