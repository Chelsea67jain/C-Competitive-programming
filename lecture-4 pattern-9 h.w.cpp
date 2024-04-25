/*  j=1 j=2 j=3 
i=1 A B C
i=2 A B C
i=3 A B C


*/

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1; 
		char ch;
		while(j<=n){
			ch='A'+j-1;
		cout<<ch<<" ";
		j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
	
}
