/* for n=4
   1 2 3 4 i=1 
     2 3 4 i=2
       3 4 i=3
	     4 i=4
  for spaces we can use  i-1 
  and we have to print each row starting with the value of i and increase it
   till n
 
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
