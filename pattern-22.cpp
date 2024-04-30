/*
   1 
  12 1
 123 21
1234 321
for spaces we can use n-i;
for first triangle we will take a variable start=1; and it will go till row number

*/ 

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
	   
	    int spaces=n-i;
	    // for printing spaces
	    while(spaces){
	    	cout<<" ";
	    	spaces=spaces-1;
		}
		
		// for 1st triangle
		int start=1;
		int j=1;
		while(j<=i){
			cout<<start;
			start=start+1;
			j=j+1;
		}
		// for 2nd triangle
		int startNo=i-1;// 2-1=1
		j=1;
		
		while(startNo){
				cout<<startNo;
				startNo=startNo-1;		
			j=j+1;
			
		}
		
		cout<<endl;
		i=i+1;
		
	}
	
}


