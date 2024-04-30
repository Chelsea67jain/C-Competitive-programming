/* for n=4
1111
 222
  33
   4
  for spaces we can use  i-1 
  and we have to print i end 4,3,2,1 times
 
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
			cout<<i;
		   j=j+1;
		}
		cout<<endl;
		i=i+1;
		
	  }
}
