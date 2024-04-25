/*
for n=4 
 D 
 C D
 B C D 
 A B C D 
 
start='A'+n-i;
1st row: 'A'+4-1='A'+3='D'

*/
#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		char start;
		start='A'+n-i;
		while(j<=i){
			
			cout<<start<<" ";
			start=start+1;
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
	
}



