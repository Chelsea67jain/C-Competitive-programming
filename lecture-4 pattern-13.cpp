/*
for n=4 
  A 
  B C 
  C D E 
  D E F G 
  formula='A'+row+col-2;

*/
#include<iostream>
using namespace std;

int main(){
    int n;
	cin>>n;
	int row=1;
	while(row<=n){
		int col=1;
		char ch;
		while(col<=row){
			ch='A'+row+col-2;
			cout<<ch<<" ";
			col=col+1;
		}
		cout<<endl;
		row=row+1;
	}	
	
	
}


