
/*  
   1 2 3 
   4 5 6 
   7 8 9 
   for n=3 rows=3 so i=1,2,3 j=1,2,3  so here we simply have to print the count 
   so we can take a variale count=1 and increase it and print the values
*/

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int i=1,count=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<count<<" ";
			count=count+1;
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
	
	
}


