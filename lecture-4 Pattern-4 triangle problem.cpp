
/*  
   i=1 *
   i=2 * *
   i=3 * * * 
   i=4 * * * * 
   so we simply have to print * i times for each row 
   
*/

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int row=1;
	while(row<=n){
		int col=1;
		while(col<=row){
			cout<<"*"<<" ";
			col=col+1;
		}
		cout<<endl;
		row=row+1;
	}
	
	
}


