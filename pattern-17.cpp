/* for n=4:
  **** i=1
   *** i=2
    ** i=3
     * i=4
  
   n-i+1 = 4-2+1=3 
*/
#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int col=1;
		int end=n-i+1;
		
	    while(col<=n){
	    	cout<<"*";
	    	col=col+1;	    	
		}
		
		cout<<endl;
		
		i=i+1;
	}
}


