/* 
for n=4 
A A A 
B B B
C C C
 
we will use  'A'+row-1
*/

#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int row=1;
	while(row<=n){
		int col=1;
		char ch='A'+row-1;
		while(col<=n){
			cout<<ch<<" ";
			col=col+1;
		}
		cout<<endl;
		row=row+1;
	}
	
	
}
